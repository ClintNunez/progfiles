#ifndef HASHTABLE
#define HASHTABLE

#include <stdbool.h>
#include <stddef.h>

typedef struct hashtable Hashtable;

Hashtable *create_hashtable();

void destroy_hashtable(Hashtable *hashtable);

void *get_item(Hashtable *hashtable, const char *key);

const char *set_item(Hashtable *hashtable, const char *key, void *value);

size_t hashtable_length(Hashtable *hashtable);

// iterator
typedef struct {
    const char *key;
    void *value;

    Hashtable *hashtable;    
    size_t index;
} Hashtable_iterator;

// make iterator
Hashtable_iterator hashtable_iterator(Hashtable *hashtable);

// move iterator
bool hashtable_iterator_next(Hashtable *hashtable_iterator);

#endif
