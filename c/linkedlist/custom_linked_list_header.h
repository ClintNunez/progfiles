#ifndef CUSTOM_LINKEDLIST_HEADER
#define CUSTOM_LINKEDLIST_HEADER

struct node {
    int data;
    struct node *next;
};

void traverse_Linked_List_From_Head(struct node *nodeP);

int get_Length_Of_Linked_List(struct node *nodeP);

bool search_Element_In_Linked_List(struct node *nodeP, int element);
int get_Element_Index_In_Linked_List(struct node *nodeP, int element);

void insert_At_Head(struct node **headNode, int newData);
void insert_At_Tail(struct node **headNode, int newData);
void insert_At_Position(struct node **headNode, int newData, int pos);

void delete_Head(struct node **headNode);
void delete_Tail(struct node **headNode);
void delete_At_Position(struct node **headNode, int pos);

#endif
