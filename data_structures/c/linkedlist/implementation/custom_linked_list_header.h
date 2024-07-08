#ifndef CUSTOM_LINKEDLIST_HEADER
#define CUSTOM_LINKEDLIST_HEADER

struct sll_node {
    int data;
    struct sll_node *next;
};

void traverse_SLL_From_Head(struct sll_node *headRef);

int get_Length_Of_SLL(struct sll_node *headRef);

bool search_Node_In_SLL(struct sll_node *headRef, int data);
int get_Node_Index_In_SLL(struct sll_node *headRef, int data);

void insert_At_Head(struct sll_node **headRef, int newData);
void insert_At_Tail(struct sll_node **headRef, int newData);
void insert_At_Position(struct sll_node **headRef, int newData, int pos);

void delete_Head(struct sll_node **headRef);
void delete_Tail(struct sll_node **headRef);
void delete_At_Position(struct sll_node **headRef, int pos);

struct dll_node {
    int data;
    struct dll_node *next;
    struct dll_node *prev;
};

struct dll_node *get_Tail_In_DLL(struct dll_node **headRef);

void traverse_DLL_From_Head(struct dll_node *headRef);

int get_Length_Of_DLL(struct dll_node *headRef);

bool search_Node_In_DLL(struct dll_node *headRef, int data);
int get_Node_Index_In_DLL(struct dll_node *headRef, int data);

void insert_At_Head_DLL(struct dll_node **headRef, int newData);
void insert_At_Tail_DLL(struct dll_node **headRef, int newData);
void insert_At_Position_DLL(struct dll_node **headRef, int newData, int pos);

void delete_Head_DLL(struct dll_node **headRef);
void delete_Tail_DLL(struct dll_node **headRef, struct dll_node **tailRef);
void delete_At_Position_DLL(struct dll_node **headRef, int pos);

struct csll_node {
    int data;
    struct csll_node *next;
};

void traverse_CSLL_From_Tail(struct csll_node *tailRef);

int get_Length_Of_CSLL(struct csll_node *tailRef);

bool search_Node_In_CSLL(struct csll_node *tailRef, int data);

void insert_At_Head_CSLL(struct csll_node **tailRef, int newData);
void insert_At_Tail_CSLL(struct csll_node **tailRef, int newData);
void insert_Before_Node_CSLL(struct csll_node **tailRef, int newData, int flag);
void insert_After_Node_CSLL(struct csll_node **tailRef, int newData, int flag);

void delete_Head_CSLL(struct csll_node **tailRef);
void delete_Tail_CSLL(struct csll_node **tailRef);
void delete_Node_By_Data_CSLL(struct csll_node **tailRef, int flag);
void delete_Before_Node_CSLL(struct csll_node **tailRef, int flag);
void delete_After_Node_CSLL(struct csll_node **tailRef, int flag);

struct cdll_node {
    int data;
    struct cdll_node *next;
    struct cdll_node *prev;
};

void traverse_CDLL_From_Head(struct cdll_node *headRef);

int get_Length_Of_CDLL(struct cdll_node *headRef);

bool search_Node_In_CDLL(struct cdll_node *headRef, int data);

void insert_At_Head_CDLL(struct cdll_node **headRef, int newData);
void insert_At_Tail_CDLL(struct cdll_node **headRef, int newData);
void insert_Before_Node_CDLL(struct cdll_node **headRef, int newData, int flag);
void insert_After_Node_CDLL(struct cdll_node **headRef, int newData, int flag);

void delete_Head_CDLL(struct cdll_node **headRef);
void delete_Tail_CDLL(struct cdll_node **headRef);
void delete_Node_By_Data_CDLL(struct cdll_node **headRef, int flag);
void delete_Before_Node_CDLL(struct cdll_node **headRef, int flag);
void delete_After_Node_CDLL(struct cdll_node **headRef, int flag);

void traverse_GHLL_From_Head(struct sll_node *headerRef);

bool search_Node_In_GHLL(struct sll_node *headerRef, int data);
int get_Node_Index_In_GHLL(struct sll_node *headerRef, int data);

void insert_At_Head_GHLL(struct sll_node **headerRef, int newData);
void insert_At_Tail_GHLL(struct sll_node **headerRef, int newData);
void insert_At_Position_GHLL(struct sll_node **headerRef, int newData, int pos);

void delete_Head_GHLL(struct sll_node **headerRef);
void delete_Tail_GHLL(struct sll_node **headerRef);
void delete_At_Position_GHLL(struct sll_node **headerRef, int pos);

void traverse_CHLL_From_Head(struct sll_node *headerRef);

bool search_Node_In_CHLL(struct sll_node *headerRef, int data);

void insert_At_Head_CHLL(struct sll_node **headerRef, int newData);
void insert_At_Tail_CHLL(struct sll_node **headerRef, int newData);
void insert_Before_Node_CHLL(struct sll_node **headerRef, int newData, int flag);
void insert_After_Node_CHLL(struct sll_node **headerRef, int newData, int flag);

void delete_Head_CHLL(struct sll_node **headerRef);
void delete_Tail_CHLL(struct sll_node **headerRef);
void delete_Node_By_Data_CHLL(struct sll_node **headerRef, int flag);

#endif