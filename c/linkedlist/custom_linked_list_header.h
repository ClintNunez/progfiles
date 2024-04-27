#ifndef CUSTOM_LINKEDLIST_HEADER
#define CUSTOM_LINKEDLIST_HEADER

struct node {
    int data;
    struct node *next;
};

// starts at the head
void traverse_Linked_List_From_Head(struct node *nodeP);
void insert_At_Head(struct node **headNode, int newData);
void insert_At_Tail(struct node **headNode, int newData);
void insert_At_Position(struct node **headNode, int newData, int pos);

#endif
