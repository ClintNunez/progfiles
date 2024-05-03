#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "custom_linked_list_header.h"

// TODO
// try catch for error
// make global variables for frequently initialized nodes
// test insert at position 0 or last
// change insert at position methods so 
//      that the node will actually have the index of the given insert pos
// clean up ){

struct sll_node *currentNode_SLL;
struct sll_node *newHead_SLL;
struct sll_node *newNode_SLL;
struct sll_node *newTail_SLL;

struct sll_node *oldHead_SLL;
struct sll_node *oldNode_SLL;
struct sll_node *oldTail_SLL;

void traverse_SLL_From_Head(struct sll_node *headRef) {
    if(headRef == NULL) {
        printf("\tList empty\n");
    } else {
        printf("\t");
        while(headRef != NULL) {
            printf("%i ", headRef->data);
            headRef = headRef->next;
        }
        printf("\n");
    }
}

int get_Length_Of_SLL(struct sll_node *headRef) {
    int i = 0;

    for(; headRef != NULL; i++) {
        headRef = headRef->next;
    }

    return i;
}

bool search_Node_In_SLL(struct sll_node *headRef, int data) {
    while(headRef != NULL) {
        if(headRef->data == data) {
            return true;
        }
        headRef = headRef->next;
    }    

    return false;
}

int get_Node_Index_In_SLL(struct sll_node *headRef, int data) {
    for(int i = 0; headRef != NULL; i++) {
        if(headRef->data == data) {
            return i;
        }
        headRef = headRef->next;
    }

    return -1;
}

void insert_At_Head(struct sll_node **headRef, int newData) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node)); 

    newNode_SLL->data = newData;
    newNode_SLL->next = *headRef;

    *headRef = newNode_SLL;
}

void insert_At_Tail(struct sll_node **headRef, int newData) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node)); 
    newTail_SLL = *headRef; 

    newNode_SLL->data = newData;
    newNode_SLL->next = NULL;

    if(*headRef == NULL)  {
        *headRef = newNode_SLL;
        return;
    }

    while(newTail_SLL->next != NULL) 
        newTail_SLL = newTail_SLL->next;

    newTail_SLL->next = newNode_SLL;
}

void insert_At_Position(struct sll_node **headRef, int newData, int pos) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node)); 

    newNode_SLL->data = newData;

    if(pos > get_Length_Of_SLL(*headRef)) {
        printf("\tGiven position is greater than the length of list\n");
    } else if(*headRef == NULL || pos == 0) {
        newNode_SLL->next = *headRef;
        *headRef = newNode_SLL;
    } else {
        currentNode_SLL = *headRef; 

        for(int i = 1; i < pos; i++) {
            currentNode_SLL = currentNode_SLL->next;
        }

        newNode_SLL->next = currentNode_SLL->next;
        currentNode_SLL->next = newNode_SLL;
    }
}

void delete_Head(struct sll_node **headRef) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == NULL) {
        oldHead_SLL = (*headRef);
        (*headRef) = NULL;
        free(oldHead_SLL);
    } else {
        oldHead_SLL = *headRef;
        *headRef = (*headRef)->next;

        free(oldHead_SLL);
    }
}

void delete_Tail(struct sll_node **headRef) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == NULL) {
        oldHead_SLL = (*headRef);
        (*headRef) = NULL;
        free(oldHead_SLL);
    } else {
        currentNode_SLL = *headRef;

        while(currentNode_SLL->next->next != NULL) {
            currentNode_SLL = currentNode_SLL->next;
        }

        struct sll_node *oldTail = currentNode_SLL->next;

        currentNode_SLL->next = NULL;

        free(oldTail);
    }
}

void delete_At_Position(struct sll_node **headRef, int pos) {
    currentNode_SLL = *headRef;

    if(pos > get_Length_Of_SLL(*headRef)) {
        printf("\tGiven position is greater than the length of list\n");
    } else if(*headRef == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == NULL) {
        oldHead_SLL = (*headRef);
        (*headRef) = NULL;
        free(oldHead_SLL);
    } else if(pos == 0) {
        (*headRef) = currentNode_SLL->next;    
        free(currentNode_SLL);
    } else {
        for(int i = 1; i < pos; i++) {
            currentNode_SLL = currentNode_SLL->next;
        } 

        oldNode_SLL = currentNode_SLL->next;

        currentNode_SLL->next = currentNode_SLL->next->next;

        free(oldNode_SLL);
    }
}

void traverse_DLL_From_Head(struct dll_node *headRef) {
    while(headRef != NULL) {
        printf("%i ", headRef->data);
        headRef = headRef->next;
    }
    printf("\n");
}

void traverse_DLL_From_Tail(struct dll_node *headRef) {
    while(headRef != NULL) {
        printf("%i ", headRef->data);
        headRef = headRef->prev;
    }
    printf("\n");
}

int get_Length_Of_DLL(struct dll_node *headRef) {
    int i = 0;
    for(; headRef != NULL; i++) {
        headRef = headRef->next;
    }

    return i;
}

bool search_Node_In_DLL(struct dll_node *headRef, int data) {
    while(headRef != NULL) {
        if(headRef->data == data) {
            return true;
        }
        headRef = headRef->next;
    }    

    return false;
}

int get_Node_Index_In_DLL(struct dll_node *headRef, int data) {

    for(int i = 0; headRef != NULL; i++) {
        if(headRef->data == data) {
            return i;
        }
        headRef = headRef->next;
    }

    return -1;
}

struct dll_node *get_Tail_In_DLL(struct dll_node **headRef) {
    struct dll_node *currentNode = *headRef;
    if(currentNode == NULL) {
        return NULL;
    } else if(currentNode->next == NULL) {
        return currentNode;
    } else {
        while(currentNode->next != NULL) {
            currentNode = currentNode->next;
        }

        return currentNode;
    }
}

void insert_At_Head_DLL(struct dll_node **headRef, int newData) {
    struct dll_node *newNode = (struct dll_node*) malloc(sizeof(struct dll_node));

    newNode->data = newData;
    newNode->prev = NULL;

    if(*headRef == NULL) {
        newNode->next = NULL;
        *headRef = newNode;
    } else {
        newNode->next = *headRef;
        (*headRef)->prev = newNode;
        *headRef = newNode;
    }
}

void insert_At_Tail_DLL(struct dll_node **headRef, int newData) {
    struct dll_node *newNode = (struct dll_node*) malloc(sizeof(struct dll_node)); 

    newNode->data = newData;
    newNode->next = NULL;

    if(*headRef == NULL) {
        newNode->prev = NULL;
        *headRef = newNode;
    } else {
        struct dll_node *tailNode = *headRef;

        while(tailNode->next != NULL) {
            tailNode = tailNode->next;
        }

        tailNode->next = newNode;
        newNode->prev = tailNode;
    }
}

void insert_At_Position_DLL(struct dll_node **headRef, int newData, int pos) {
    struct dll_node *newNode = (struct dll_node*) malloc(sizeof(struct dll_node));
    newNode->data = newData;

    if(pos == 0 || *headRef == NULL) {
        newNode->next = *headRef;
        newNode->prev = NULL;
        (*headRef)->prev = newNode;
        *headRef = newNode;
    } else {
        struct dll_node *currentNode = *headRef;  

        for(int i = 1; i < pos && currentNode->next != NULL; i++) {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        newNode->prev = currentNode;
        currentNode->next = newNode;
    }
}

void delete_Head_DLL(struct dll_node **headRef) {
    struct dll_node *oldHead = (*headRef);

    if((*headRef) == NULL) { 
        printf("Linked list is already empty.\n");
    } else if((*headRef)->next == NULL) { 
        (*headRef) = NULL; 
        free(oldHead);
    } else {
        (*headRef) = (*headRef)->next;
        (*headRef)->prev = NULL;
        free(oldHead);
    }
}

void delete_Tail_DLL(struct dll_node **headRef, struct dll_node **tailRef) {
    if((*headRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*tailRef)->prev == NULL) { 
        struct dll_node *oldHead = (*headRef);
        (*headRef) = (*tailRef) = NULL;
        free(oldHead);
    } else {
        struct dll_node *oldTail = (*tailRef);   
        (*tailRef) = (*tailRef)->prev;
        (*tailRef)->next = NULL;
        free(oldTail);
    }
}

void delete_At_Position_DLL(struct dll_node **headRef, int pos) {
    struct dll_node *currentNode = *headRef;

    if((*headRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headRef)->next == NULL) {
        struct dll_node *oldHead = (*headRef);
        (*headRef) = NULL;

        free(oldHead);
    } else if(pos == 0) {
        (*headRef) = currentNode->next;    

        free(currentNode);
    } else {
        int length = get_Length_Of_DLL(*headRef);

        if(pos > length || pos < 0) {
            return;
        } else {
            for(int i = 1; i < pos; i++) {
                currentNode = currentNode->next;
            }
            struct dll_node *oldNode = currentNode->next; 
            currentNode->next = oldNode->next;
            free(oldNode);
        }
    }
}

void traverse_CSLL_From_Tail(struct csll_node *tailRef) {
    if(tailRef != NULL) {
        struct csll_node *start = tailRef->next;

        do {
            tailRef = tailRef->next;
            printf("%i ", tailRef->data);
        } while(start != tailRef->next);
    }

    printf("\n");
}

int get_Length_Of_CSLL(struct csll_node *headRef) {
    int i = 0;

    if(headRef != NULL) {
        struct csll_node *start = headRef;
        do {
            i++;
            headRef = headRef->next;
        } while(headRef != start);
    }

    return i;
}

bool search_Node_In_CSLL(struct csll_node *tailRef, int data) {
    if(tailRef != NULL) {
        struct csll_node *tail = tailRef;
        do {
            if(tail->data == data) 
                return true;
            tail = tail->next;
        } while(tail != tailRef);
    }

    return false;
}

void insert_At_Head_CSLL(struct csll_node **tailRef, int newData) {
    struct csll_node *newNode = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode->data = newData;

    if((*tailRef) == NULL) {
        newNode->next = newNode;
        (*tailRef) = newNode;
    } else if((*tailRef)->next == (*tailRef)){ 
        (*tailRef)->next = newNode;
        newNode->next = (*tailRef);
    } else {
        newNode->next = (*tailRef)->next;
        (*tailRef)->next = newNode;
    }
}

void insert_At_Tail_CSLL(struct csll_node **tailRef, int newData) {
    struct csll_node *newNode = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode->data = newData;

    if((*tailRef) == NULL) {
        newNode->next = newNode;
        (*tailRef) = newNode;
    } else if((*tailRef)->next == (*tailRef)) {
        (*tailRef)->next = newNode; 
        newNode->next = (*tailRef);
        (*tailRef) = newNode;
    } else {
        newNode->next = (*tailRef)->next;
        (*tailRef)->next = newNode;
        (*tailRef) = newNode;
    }
}

void insert_Before_Node_CSLL(struct csll_node **tailRef, int newData, int flag) {
    struct csll_node *newNode = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode->data = newData;

    if((*tailRef) == NULL) { 
        newNode->next = newNode;
        (*tailRef) = newNode;
    } else if((*tailRef)->next == (*tailRef)) {
        (*tailRef)->next = newNode;
        newNode->next = (*tailRef);
    } else {
        struct csll_node *currentNode = *tailRef;

        while(currentNode->next->data != flag) {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;

        if(currentNode == (*tailRef))
            (*tailRef) = newNode;
    }
}

void insert_After_Node_CSLL(struct csll_node **tailRef, int newData, int flag) {
    struct csll_node *newNode = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode->data = newData;

    if((*tailRef) == NULL) {
        newNode->next = newNode;
        (*tailRef) = newNode;
    } else if((*tailRef)->next == (*tailRef)) { 
        (*tailRef)->next = newNode;
        newNode->next = (*tailRef);
        (*tailRef) = newNode;
    } else {
        struct csll_node *temp = (*tailRef);

        while(temp->data != flag) {
            temp = temp->next; 
        }

        newNode->next = temp->next;
        temp->next = newNode;

        if(temp == (*tailRef)) {
            (*tailRef) = newNode;
        }
    }

}

void delete_Head_CSLL(struct csll_node **tailRef) {
    if((*tailRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        struct csll_node *oldTail = (*tailRef);
        (*tailRef) = NULL; 
        free(oldTail);
    } else {
        struct csll_node *oldHead = (*tailRef)->next;

        (*tailRef)->next = oldHead->next;
        free(oldHead);
    }
}

void delete_Tail_CSLL(struct csll_node **tailRef) {
    if((*tailRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        struct csll_node *oldTail = (*tailRef);
        (*tailRef) = NULL; 
        free(oldTail);
    } else {
        struct csll_node *oldTail = (*tailRef);
        struct csll_node *newTail = (*tailRef);

        while(newTail->next != oldTail) {
            newTail = newTail->next;
        }

        newTail->next = oldTail->next;
        (*tailRef) = newTail;
        free(oldTail);
    }
}

// add check for removing node will result to only one remaining node
void delete_Node_By_Data_CSLL(struct csll_node **tailRef, int flag) {
    if((*tailRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        struct csll_node *oldTail = (*tailRef);
        (*tailRef) = NULL; 
        free(oldTail);
    } else {
        struct csll_node *head = (*tailRef)->next;
        struct csll_node *currentNode = (*tailRef);
        struct csll_node *oldNode;

        while(currentNode->next->data != flag) {
            currentNode = currentNode->next;
        }
        oldNode = currentNode->next;
        currentNode->next = oldNode->next;
        free(oldNode);

        if(currentNode->next == head) {
            (*tailRef) = currentNode;
        }

    }
}

void delete_Before_Node_CSLL(struct csll_node **tailRef, int flag) {
    if((*tailRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        struct csll_node *oldTail = (*tailRef);
        (*tailRef) = NULL; 
        free(oldTail);
    } else {
        struct csll_node *head = (*tailRef)->next;
        struct csll_node *currentNode = (*tailRef);
        struct csll_node *oldNode;

        while(currentNode->next->next->data != flag)  {
            currentNode = currentNode->next; 
        }

        oldNode = currentNode->next;
        currentNode->next = oldNode->next;
        free(oldNode);

        if(currentNode->next == head) {
            (*tailRef) = currentNode;
        }
    }
}

void delete_After_Node_CSLL(struct csll_node **tailRef, int flag) {
    if((*tailRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        struct csll_node *oldTail = (*tailRef);
        (*tailRef) = NULL; 
        free(oldTail);
    } else {
        struct csll_node *head = (*tailRef)->next;
        struct csll_node *currentNode = (*tailRef);
        struct csll_node *oldNode;

        while(currentNode->data != flag)  {
            currentNode = currentNode->next; 
        }

        oldNode = currentNode->next;
        currentNode->next = oldNode->next;
        free(oldNode);

        if(currentNode->next == head) {
            (*tailRef) = currentNode;
        }
    }
}

// TODO find a better way for traversal
void traverse_CDLL_From_Head(struct cdll_node *headRef) {
    if(headRef != NULL) {
        struct cdll_node *start = headRef;

        do {
            printf("%i ", headRef->data);
            headRef = headRef->next;
        } while(headRef != start);
    }

    printf("\n");
}

int get_Length_Of_CDLL(struct cdll_node *headRef) {
    int i = 0;

    if(headRef != NULL) {
        struct cdll_node *head = headRef;
        do {
            i++;
            headRef = headRef->next;
        } while(headRef != head);
    }

    return i;
}

bool search_Node_In_CDLL(struct cdll_node *headRef, int data) {
    if(headRef != NULL) {
        struct cdll_node *head = headRef;
        do {
            if(headRef->data == data) 
                return true;
            headRef = headRef->next;
        } while(headRef != head);
    }

    return false;
}

void insert_At_Head_CDLL(struct cdll_node **headRef, int newData) {
    struct cdll_node *newNode = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode->data = newData;

    if((*headRef) == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        (*headRef) = newNode;
    } else if((*headRef)->next == (*headRef)) {
        newNode->next = (*headRef);
        newNode->prev = (*headRef);
        (*headRef)->next = newNode;
        (*headRef)->prev = newNode;
        (*headRef) = newNode;
    } else {
        struct cdll_node *currentNode = (*headRef);

        do { // go to the last node
            currentNode = currentNode->next;
        } while(currentNode->next != (*headRef));

        newNode->next = (*headRef);
        newNode->prev = currentNode;
        currentNode->next = newNode; 
        (*headRef)->prev = newNode;

        (*headRef) = newNode;
    }
}

void insert_At_Tail_CDLL(struct cdll_node **headRef, int newData) {
    struct cdll_node *newNode = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode->data = newData;

    if((*headRef) == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        (*headRef) = newNode;
    } else if((*headRef)->next == (*headRef)) {
        (*headRef)->next = newNode;
        (*headRef)->prev = newNode;
        newNode->next = (*headRef);
        newNode->prev = (*headRef);
    } else {
        struct cdll_node *currentNode = (*headRef);

        do { 
            currentNode = currentNode->next;
        } while(currentNode != (*headRef)->prev);

        currentNode->next = newNode; 
        newNode->prev = currentNode;
        newNode->next = (*headRef);
        (*headRef)->prev = newNode;
    }
}

void insert_Before_Node_CDLL(struct cdll_node **headRef, int newData, int flag) {
    struct cdll_node *newNode = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode->data = newData;

    if((*headRef) == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        (*headRef) = newNode;
    } else if((*headRef)->next == (*headRef)) {
        newNode->next = (*headRef);
        newNode->prev = (*headRef);
        (*headRef)->next = newNode;
        (*headRef)->prev = newNode;
        (*headRef) = newNode;
    } else {
        struct cdll_node *currentNode = (*headRef);

        while(currentNode->next->data != flag) {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        newNode->prev = currentNode;
        currentNode->next->prev = newNode;
        currentNode->next = newNode; 

        if(newNode->next == (*headRef)) {
            (*headRef) = newNode;
        }
    }
}

void insert_After_Node_CDLL(struct cdll_node **headRef, int newData, int flag) {
    struct cdll_node *newNode = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode->data = newData;

    if((*headRef) == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        (*headRef) = newNode;
    } else if((*headRef)->next == (*headRef)) {
        newNode->next = (*headRef);
        newNode->prev = (*headRef);
        (*headRef)->next = newNode;
        (*headRef)->prev = newNode;
    } else {
        struct cdll_node *currentNode = (*headRef);

        while(currentNode->data != flag) {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        newNode->prev = currentNode;
        currentNode->next->prev = newNode;
        currentNode->next = newNode; 

        if(newNode->next == (*headRef)) {
            (*headRef) = newNode;
        }
    }
}

void delete_Head_CDLL(struct cdll_node **headRef) {
    if((*headRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        struct cdll_node *oldHead = (*headRef);
        (*headRef) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *oldHead = (*headRef);
        struct cdll_node *newHead = (*headRef)->next;

        newHead->prev = oldHead->prev;
        oldHead->prev->next = newHead;
        (*headRef) = newHead;

        free(oldHead);
    }
}

void delete_Tail_CDLL(struct cdll_node **headRef) {
    if((*headRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        struct cdll_node *oldHead = (*headRef);
        (*headRef) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *oldTail = (*headRef);
        struct cdll_node *newTail;

        while(oldTail->next != (*headRef)) {
            oldTail = oldTail->next;
        }

        newTail = oldTail->prev;
        newTail->next = oldTail->next;
        oldTail->next->prev = newTail;

        free(oldTail);
    }
}

void delete_Node_By_Data_CDLL(struct cdll_node **headRef, int flag) {
    if((*headRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        struct cdll_node *oldHead = (*headRef);
        (*headRef) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *oldNode = (*headRef);
        struct cdll_node *newNode;

        while(oldNode->data != flag) {
            oldNode = oldNode->next;
        }

        newNode = oldNode->next;
        newNode->prev = oldNode->prev;
        oldNode->prev->next = newNode;

        if(oldNode == (*headRef)) {
            (*headRef) = newNode;
        }

        free(oldNode);
    }
}

void delete_Before_Node_CDLL(struct cdll_node **headRef, int flag) {
    if((*headRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        struct cdll_node *oldHead = (*headRef);
        (*headRef) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *currentNode = (*headRef);
        struct cdll_node *oldNode;
        struct cdll_node *newNode;

        while(currentNode->data != flag) {
            currentNode = currentNode->next;
        }

        if(currentNode->prev == (*headRef)) {
            (*headRef) = newNode;
        }

        oldNode = currentNode->prev;
        newNode = currentNode->prev->prev;
        newNode->next = currentNode;
        currentNode->prev = newNode;

        free(oldNode);
    }
}

void delete_After_Node_CDLL(struct cdll_node **headRef, int flag) {
    if((*headRef) == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        struct cdll_node *oldHead = (*headRef);
        (*headRef) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *currentNode = (*headRef);
        struct cdll_node *oldNode;
        struct cdll_node *newNode;

        while(currentNode->data != flag) {
            currentNode = currentNode->next;
        }

        if(currentNode->next == (*headRef)) {
            (*headRef) = newNode;
        }

        oldNode = currentNode->next;
        newNode = currentNode->next->next;
        newNode->prev = currentNode;
        currentNode->next = newNode;

        free(oldNode);
    }
}

void traverse_Header_SLL_From_Head(struct header_node_sll *headerRef) {
    if(headerRef->next == NULL) {
        printf("Linked list is already empty.\n");
    } else {
        struct sll_node *currentNode = headerRef->next;
        while(currentNode != NULL) {
            printf("%i ", currentNode->data);
            currentNode = currentNode->next;
        }
        printf("\n");
    }
}

bool search_Node_In_Header_SLL(struct header_node_sll *headerRef, int data) {
    struct sll_node *currentNode = headerRef->next;

    while(currentNode != NULL) {
        if(currentNode->data == data) {
            return true;
        }
        currentNode = currentNode->next;
    }

    return false;
}

int get_Node_Index_In_Header_SLL(struct header_node_sll *headerRef, int data) {
    struct sll_node *currentNode = headerRef->next;

    for(int i = 0; i < headerRef->length; i++) {
        if(currentNode->data == data) {
            return i;
        }
        currentNode = currentNode->next;
    }

    return -1;
}

void insert_At_Head_Header_SLL(struct header_node_sll **headerRef, int newData) {
    struct sll_node *newHead = (struct sll_node*) malloc(sizeof(struct sll_node));

    newHead->data = newData;

    if((*headerRef)->length == 0) {
        newHead->next = NULL;
        (*headerRef)->next = newHead;
        (*headerRef)->length++;
    } else {
        newHead->next = (*headerRef)->next;
        (*headerRef)->next = newHead;
        (*headerRef)->length++;
    }
}

void insert_At_Tail_Header_SLL(struct header_node_sll **headerRef, int newData) {
    struct sll_node *newTail = (struct sll_node*) malloc(sizeof(struct sll_node));

    newTail->data = newData;
    newTail->next = NULL;

    if((*headerRef)->length == 0) {
        (*headerRef)->next = newTail;
        (*headerRef)->length++;
    } else {
        struct sll_node *currentNode = (*headerRef)->next;
        while(currentNode->next != NULL) {
            currentNode = currentNode->next;
        }
        currentNode->next = newTail;
        (*headerRef)->length++;
    }
}

void insert_At_Position_Header_SLL(struct header_node_sll **headerRef, int newData, int pos) {
    struct sll_node *newNode = (struct sll_node*) malloc(sizeof(struct sll_node)); 

    newNode->data = newData;

    if((*headerRef)->next == NULL || pos == 0) {
        newNode->next = (*headerRef)->next;
        (*headerRef)->next = newNode;
        (*headerRef)->length++;
    } else {
        struct sll_node *currentNode = (*headerRef)->next;

        for(int i = 1; i < pos; i++) {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;                
        (*headerRef)->length++;
    }
}

void delete_Head_Header_SLL(struct header_node_sll **headerRef) {
    if((*headerRef)->next == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headerRef)->next->next == NULL){
        struct sll_node *oldHead = (*headerRef)->next;
        (*headerRef)->next = NULL;
        
        free(oldHead);
        (*headerRef)->length--;
    } else {
        struct sll_node *oldHead = (*headerRef)->next;
        (*headerRef)->next = oldHead->next;

        free(oldHead);
        (*headerRef)->length--;
    }
}

void delete_Tail_Header_SLL(struct header_node_sll **headerRef) {
    if((*headerRef)->next == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headerRef)->next->next == NULL) {
        struct sll_node *oldHead = (*headerRef)->next;
        (*headerRef)->next = NULL;
        
        free(oldHead);
        (*headerRef)->length--;
    } else {
        struct sll_node *currentNode = (*headerRef)->next;
        while(currentNode->next->next != NULL) {
            currentNode = currentNode->next;
        }

        struct sll_node *oldHead = currentNode->next;
        currentNode->next = NULL;

        free(oldHead);
        (*headerRef)->length--;
    }
}

void delete_At_Position_Header_SLL(struct header_node_sll **headerRef, int pos) {
    if(pos >= (*headerRef)->length) {
        printf("Given delete index is out of bounds");
    } else if((*headerRef)->next == NULL) {
        printf("Linked list is already empty.\n");
    } else if((*headerRef)->next->next == NULL) {
        struct sll_node *oldHead = (*headerRef)->next;
        (*headerRef)->next = NULL;
        
        free(oldHead);
        (*headerRef)->length--;
    } else if(pos == 0) {
        struct sll_node *oldHead = (*headerRef)->next;
        (*headerRef)->next = oldHead->next;

        free(oldHead);
        (*headerRef)->length--;
    } else {
        struct sll_node *currentNode = (*headerRef)->next;
        for(int i = 1; i < pos; i++) {
            currentNode = currentNode->next;
        }

        struct sll_node *oldNode = currentNode->next;
        currentNode->next = oldNode->next;
        free(oldNode);
        (*headerRef)->length--;
    }
}
