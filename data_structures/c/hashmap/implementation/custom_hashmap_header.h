#ifndef CUSTOM_HASHMAP_HEADER
#define CUSTOM_HASHMAP_HEADER

typedef struct node {
    char *key;
    int data;
    struct node *next;
} Node;

typedef struct Hashmap {
    Node **buckets;
    int size;
} Hashmap;

Hashmap *new_Hashmap(int size);
unsigned int hash(const char *key, int size);
void insert_Node(Hashmap *hashmap, const char *key, int value);
int search_Node(Hashmap *hashmap, const char *key, int value);
void delete_Node(Hashmap *hashmap, const char *key);
void free_Hashmap(Hashmap *hashmap);

#endif
