#ifndef CUSTOM_LINKEDLIST_HEADER
#define CUSTOM_LINKEDLIST_HEADER

struct sll_node {
    int data;
    struct sll_node *next;
};

void traverse_SLL_From_Head(struct sll_node *nodeP);

int get_Length_Of_SLL(struct sll_node *nodeP);

bool search_Element_In_SLL(struct sll_node *nodeP, int element);
int get_Element_Index_In_SLL(struct sll_node *nodeP, int element);

void insert_At_Head(struct sll_node **headNode, int newData);
void insert_At_Tail(struct sll_node **headNode, int newData);
void insert_At_Position(struct sll_node **headNode, int newData, int pos);

void delete_Head(struct sll_node **headNode);
void delete_Tail(struct sll_node **headNode);
void delete_At_Position(struct sll_node **headNode, int pos);

#endif
