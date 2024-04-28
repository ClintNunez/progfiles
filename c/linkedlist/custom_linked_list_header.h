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

struct dll_node {
    int data;
    struct dll_node *next;
    struct dll_node *prev;
};

struct dll_node *get_Tail_In_DLL(struct dll_node **headNode);

void traverse_DLL_From_Head(struct dll_node *nodeP);
void traverse_DLL_From_Tail(struct dll_node *nodeP);

int get_Length_Of_DLL(struct dll_node *nodeP);

bool search_Element_In_DLL(struct dll_node *nodeP, int element);
int get_Element_Index_In_DLL(struct dll_node *nodeP, int element);

void insert_At_Head_DLL(struct dll_node **headNode, int newData);
void insert_At_Tail_DLL(struct dll_node **headNode, int newData);
void insert_At_Position_DLL(struct dll_node **headNode, int newData, int pos);

void delete_Head_DLL(struct dll_node **headNode);
void delete_Tail_DLL(struct dll_node **headNode, struct dll_node **tailNode);
void delete_At_Position_DLL(struct dll_node **headNode, int pos);
#endif
