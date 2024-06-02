#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "custom_hashmap_header.h"

unsigned int hash(const char *key, int size) {
    unsigned int hash = 0;
    int c;
    while ((c = *key++)) {
        hash =  c + (hash << 6) + (hash << 16) - hash;
    }

    return hash % size;
}

Node *node(const char *key, int data) {
    Node *node = malloc(sizeof(Node));
    node->key = strdup(key);
    node->data = data;
    node->next = NULL;
    return node;
}

Hashmap *new_hashmap(int size) {
    Hashmap *hashmap = malloc(sizeof(Hashmap));
    hashmap->size = size;
    hashmap->buckets = malloc(size * sizeof(Node));
    for (int i = 0; i < size; i++) {
        hashmap->buckets[i] = NULL;
    }
    return hashmap;
}
