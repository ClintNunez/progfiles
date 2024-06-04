#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

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

Hashtable *create_hashtable() {
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

void destroy_hashtable(Hashtable *hashtable);

void *get_item(Hashtable *hashtable, const char *key);

const char *set_item(Hashtable *hashtable, const char *key, void *value);

size_t hashtable_length(Hashtable *hashtable);

// make iterator
Hashtable_iterator hashtable_iterator(Hashtable *hashtable);

// move iterator
bool hashtable_iterator_next(Hashtable *hashtable_iterator);

