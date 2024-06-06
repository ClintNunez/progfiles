#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "hashtable.h"

typedef struct {
    const char *key;
    void *value;
} Hashtable_item;

struct hashtable {
    Hashtable_item *hashtable_items;
    size_t capacity; // max capacity of hashtable
    size_t length; // current length of hashtable
};

#define INITIAL_CAPACITY 16 // must not be zero

Hashtable *create_hashtable(void) {
    Hashtable *hashtable = malloc(sizeof(Hashtable));
    if(hashtable == NULL) {
        return NULL;
    } 
    hashtable->length = 0;
    hashtable->capacity = INITIAL_CAPACITY;

    hashtable->hashtable_items = calloc(hashtable->capacity, sizeof(Hashtable_item));
    if(hashtable->hashtable_items == NULL) {
        free(hashtable);
        return NULL;
    }

    return hashtable;
};

void destroy_hashtable(Hashtable *hashtable) {
    for(size_t i = 0; i < hashtable->capacity; i++) {
        free((void *)hashtable->hashtable_items[i].key);
    }

    free(hashtable->hashtable_items);
    free(hashtable);
};

#define FNV_OFFSET 14695981039346656037UL
#define FNV_PRIME 1099511628211UL

// Return 64-bit FNV-1a hash for key (NUL-terminated). See description:
// https://en.wikipedia.org/wiki/Fowler–Noll–Vo_hash_function
static uint64_t hash_key(const char* key) {
    uint64_t hash = FNV_OFFSET;
    for (const char* p = key; *p; p++) {
        hash ^= (uint64_t)(unsigned char)(*p);
        hash *= FNV_PRIME;
    }
    return hash;
}

void *get_item(Hashtable *hashtable, const char *key) {
    // hashkey
    uint64_t hash = hash_key(key);
    // get index by ANDing capacity - 1
    size_t index = (size_t)(hash & (uint64_t)(hashtable->capacity - 1));
    
    // loop through the items
    while(hashtable->hashtable_items[index].key != NULL) {
        // compare keys, return value if keys match
        if(strcmp(key, hashtable->hashtable_items[index].key) == 0) {
            return hashtable->hashtable_items[index].value; 
        }

        // wrap arround if index exceed capacity
        index++;
        if(index >= hashtable->capacity) {
            index = 0;
        }
    }
    
    return NULL;
}

// helper functions for set 
static const char* hashtable_set_item(Hashtable_item *hashtable_items, size_t capacity, const char *key, void *value, size_t *plength) {
    uint64_t hash = hash_key(key);
    size_t index = (size_t)(hash & (uint64_t)(capacity - 1));

    // loop till we find an empty slot
    while(hashtable_items[index].key != NULL) {
        // update value of key if it already exists
        if(strcmp(key, hashtable_items[index].key) == 0) {
            hashtable_items[index].value = value;
            return hashtable_items[index].key;
        }

        index++;
        if(index >= capacity) {
            index = 0;
        }
    }
    

    // add item to the array if it doesn't exist
    if(plength != NULL) {
        key = strdup(key);
        if(key == NULL) {
            return NULL;
        }
        (*plength)++;
    }

    hashtable_items[index].key = (char*)key;
    hashtable_items[index].value = value;
    return key;
}

static bool hashtable_expand(Hashtable *hashtable) {
    // allocate new entries 
    size_t new_capacity = hashtable->capacity * 2;

    // overflow
    if (new_capacity < hashtable->capacity) {
        return false;
    }
    Hashtable_item *new_hashtable_items = calloc(new_capacity, sizeof(Hashtable_item));
    if (new_hashtable_items == NULL) {
        return false;
    }

    // loop through items and move all non empty items to a new array
    for (size_t i = 0; i < hashtable->capacity; i++) {
        Hashtable_item hashtable_item = hashtable->hashtable_items[i];
        if(hashtable_item.key != NULL) {
            hashtable_set_item(new_hashtable_items, new_capacity, 
                               hashtable_item.key, hashtable_item.value, NULL);
        }
    }
    
    // free old table and update values 
    free(hashtable->hashtable_items);
    hashtable->hashtable_items = new_hashtable_items;
    hashtable->capacity = new_capacity;
    return true;
}

const char *set_item(Hashtable *hashtable, const char *key, void *value) {
    assert(value != NULL);
    if(value == NULL) {
        return NULL;
    }

    if(hashtable->length >= hashtable->capacity / 2) {
        if(!hashtable_expand(hashtable)) {
            return NULL;
        }
    }
    
    return hashtable_set_item(hashtable->hashtable_items, hashtable->capacity, key, value, &hashtable->length);
}

size_t hashtable_length(Hashtable *hashtable) {
    return hashtable->length;
}

// make iterator
Hashtable_iterator hashtable_iterator(Hashtable *hashtable) {
    Hashtable_iterator iterator;
    iterator.hashtable = hashtable;
    iterator.index = 0;
    return iterator;
}

// move iterator
bool hashtable_iterator_next(Hashtable_iterator *hashtable_iterator) {
    Hashtable *hashtable = hashtable_iterator->hashtable;
    while(hashtable_iterator->index < hashtable->capacity) {
        size_t i = hashtable_iterator->index;
        hashtable_iterator->index++;
        if(hashtable->hashtable_items[i].key != NULL) {
            Hashtable_item hashtable_item = hashtable->hashtable_items[i];
            hashtable_iterator->key = hashtable_item.key;
            hashtable_iterator->value = hashtable_item.value;
            return true;        
        }
    }
    return false;
}

