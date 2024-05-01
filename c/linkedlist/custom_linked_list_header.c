#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "custom_linked_list_header.h"

// TODO
// change temp to current
// change nodeP to current

// starts at the head
void traverse_SLL_From_Head(struct sll_node *nodeP) {
    while(nodeP != NULL) {
        printf("%i ", nodeP->data);
        nodeP = nodeP->next;
    }
    printf("\n");
}

int get_Length_Of_SLL(struct sll_node *nodeP) {
    int i = 0;
    for(; nodeP != NULL; i++) {
        nodeP = nodeP->next;
    }

    return i;
}

bool search_Element_In_SLL(struct sll_node *nodeP, int element) {
    while(nodeP != NULL) {
        if(nodeP->data == element) {
            return true;
        }
        nodeP = nodeP->next;
    }    

    return false;
}

int get_Element_Index_In_SLL(struct sll_node *nodeP, int element) {

    for(int i = 0; nodeP != NULL; i++) {
        if(nodeP->data == element) {
            return i;
        }
        nodeP = nodeP->next;
    }

    return -1;
}

void insert_At_Head(struct sll_node **headNode, int newData) {
    struct sll_node *newNode = (struct sll_node*) malloc(sizeof(struct sll_node)); 

    newNode->data = newData;

    // point the newNode to the current value of headNode
    newNode->next = *headNode;

    // change the value of headNode to the newNode
    *headNode = newNode;
}

void insert_At_Tail(struct sll_node **headNode, int newData) {
    struct sll_node *newNode = (struct sll_node*) malloc(sizeof(struct sll_node)); 
    struct sll_node *tail = *headNode; 

    newNode->data = newData;
    newNode->next = NULL;

    if(*headNode == NULL)  {
        *headNode = newNode;
        return;
    }

    while(tail->next != NULL) 
        tail = tail->next;

    tail->next = newNode;
}

void insert_At_Position(struct sll_node **headNode, int newData, int pos) {
    struct sll_node *newNode = (struct sll_node*) malloc(sizeof(struct sll_node)); 

    newNode->data = newData;

    // this is basically inserting at head
    if(pos == 0 || *headNode == NULL) {
        newNode->next = *headNode;
        *headNode = newNode;
        return;
    }

    struct sll_node *current = *headNode; 

    for(int i = 1; i < pos && current->next != NULL; i++) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void delete_Head(struct sll_node **headNode) {
    if(*headNode == NULL) {
        printf("Linked list is already empty.\n");
        return;
    } 

    struct sll_node *temp = *headNode;

    *headNode = (*headNode)->next;

    free(temp);
}

void delete_Tail(struct sll_node **headNode) {
    if(*headNode == NULL) {
        printf("Linked list is already empty.\n");
        return;
    } 

    struct sll_node *temp = *headNode;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    struct sll_node *tail = temp->next;

    temp->next = NULL;

    free(tail);
}

void delete_At_Position(struct sll_node **headNode, int pos) {
    struct sll_node *temp = *headNode;

    if(*headNode == NULL) {
        printf("Linked list is already empty.\n");
        return;
    } else if(pos == 0) {
        *headNode = (*headNode)->next;

        free(temp);
    } 

    // temp is a pointer to the headnode 
    // *temp = *temp->next removes the previous nodes since instead of only changing the pointer,
    // the value of the headnode is directly changed to what is the next sll_node; 
    for(int i = 1; i < pos && temp->next != NULL; i++) {
        temp = temp->next;  
    } 

    struct sll_node *remove = temp->next;

    temp->next = temp->next->next;

    free(remove);
}

void traverse_DLL_From_Head(struct dll_node *nodeP) {
    while(nodeP != NULL) {
        printf("%i ", nodeP->data);
        nodeP = nodeP->next;
    }
    printf("\n");
}

void traverse_DLL_From_Tail(struct dll_node *nodeP) {
    while(nodeP != NULL) {
        printf("%i ", nodeP->data);
        nodeP = nodeP->prev;
    }
    printf("\n");
}

int get_Length_Of_DLL(struct dll_node *nodeP) {
    int i = 0;
    for(; nodeP != NULL; i++) {
        nodeP = nodeP->next;
    }

    return i;
}

// search for ascending and descending
bool search_Element_In_DLL(struct dll_node *nodeP, int element) {
    while(nodeP != NULL) {
        if(nodeP->data == element) {
            return true;
        }
        nodeP = nodeP->next;
    }    

    return false;
}

int get_Element_Index_In_DLL(struct dll_node *nodeP, int element) {

    for(int i = 0; nodeP != NULL; i++) {
        if(nodeP->data == element) {
            return i;
        }
        nodeP = nodeP->next;
    }

    return -1;
}

struct dll_node *get_Tail_In_DLL(struct dll_node **headNode) {
    struct dll_node *temp = *headNode;
    if(temp == NULL) {
        return NULL;
    } else if(temp->next == NULL) {
        return temp;
    } else {
        while(temp->next != NULL) {
            temp = temp->next;
        }

        return temp;
    }
}

void insert_At_Head_DLL(struct dll_node **headNode, int newData) {
    struct dll_node *newNode = (struct dll_node*) malloc(sizeof(struct dll_node));

    newNode->data = newData;
    newNode->prev = NULL;

    if(*headNode == NULL) {
        newNode->next = NULL;
        *headNode = newNode;
    } else {
        newNode->next = *headNode;
        (*headNode)->prev = newNode;
        *headNode = newNode;
    }
}

void insert_At_Tail_DLL(struct dll_node **headNode, int newData) {
    struct dll_node *newNode = (struct dll_node*) malloc(sizeof(struct dll_node)); 

    newNode->data = newData;
    newNode->next = NULL;

    if(*headNode == NULL) {
        newNode->prev = NULL;
        *headNode = newNode;
    } else {
        struct dll_node *tail = *headNode;

        while(tail->next != NULL) {
            tail = tail->next;
        }

        tail->next = newNode;
        newNode->prev = tail;
    }
}

void insert_At_Position_DLL(struct dll_node **headNode, int newData, int pos) {
    struct dll_node *newNode = (struct dll_node*) malloc(sizeof(struct dll_node));
    newNode->data = newData;

    if(pos == 0 || *headNode == NULL) {
        newNode->next = *headNode;
        newNode->prev = NULL;
        (*headNode)->prev = newNode;
        *headNode = newNode;
    } else {
        struct dll_node *temp = *headNode;  

        for(int i = 1; i < pos && temp->next != NULL; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
    }
}

// idk if I should also add the tailNode as a parameter
void delete_Head_DLL(struct dll_node **headNode) {
    if((*headNode) == NULL) { // empty
        return;
    } else if((*headNode)->next == NULL) { // one node
        (*headNode) = NULL; 
    } else {
        struct dll_node *oldHead = *headNode;
        (*headNode) = (*headNode)->next;
        (*headNode)->prev = NULL;
        free(oldHead);
    }
}

void delete_Tail_DLL(struct dll_node **headNode, struct dll_node **tailNode) {
    if((*headNode) == NULL) { // empty
        return;
    } else if((*tailNode)->prev == NULL) { // one element
        *headNode = *tailNode = NULL;
    } else {
        struct dll_node *oldTail = *tailNode;   
        (*tailNode) = (*tailNode)->prev;
        (*tailNode)->next = NULL;
        free(oldTail);
    }
}

void delete_At_Position_DLL(struct dll_node **headNode, int pos) {
    if((*headNode) == NULL) {
        return;
    }

    int length = get_Length_Of_DLL(*headNode);
    if(pos > length || pos < 0) {
        return;
    } else {
        struct dll_node *temp = *headNode;
        for(int i = 1; i < pos; i++) {
            temp = temp->next;
        }
        struct dll_node *currentNode = temp->next; 
        temp->next = currentNode->next;
        free(currentNode);
    }
}

void traverse_CSLL_From_Tail(struct csll_node *tailNode) {
    if(tailNode != NULL) {
        struct csll_node *start = tailNode->next;

        // the end point is the node that points to the start;
        do {
            tailNode = tailNode->next;
            printf("%i ", tailNode->data);
        } while(start != tailNode->next);
    }

    printf("\n");
}

int get_Length_Of_CSLL(struct csll_node *nodeP) {
    if(nodeP != NULL) {
        int i = 0;
        struct csll_node *start = nodeP;

        do {
            i++;
            nodeP = nodeP->next;
        } while(nodeP != start);

        return i;
    }

    return 0;
}

// TODO fix this to not loop indefinitely
bool search_Element_In_CSLL(struct csll_node *tailNode, int element) {
    while(tailNode != NULL) {
        if(tailNode->data == element) {
            return true;
        }
        tailNode = tailNode->next;
    }

    return false;
}

void insert_At_Head_CSLL(struct csll_node **tailNode, int newData) {
    struct csll_node *newNode = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode->data = newData;

    if((*tailNode) == NULL) { // no element
        newNode->next = newNode;
        (*tailNode) = newNode;
    } else if((*tailNode)->next == (*tailNode)){ // one node (head)
        (*tailNode)->next = newNode;
        newNode->next = (*tailNode);
    } else {
        newNode->next = (*tailNode)->next;
        (*tailNode)->next = newNode;
    }
}

void insert_At_Tail_CSLL(struct csll_node **tailNode, int newData) {
    struct csll_node *newNode = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode->data = newData;

    if((*tailNode) == NULL) { // no nodes
        newNode->next = newNode;
        (*tailNode) = newNode;
    } else if((*tailNode)->next == (*tailNode)) { // one node
        (*tailNode)->next = newNode; 
        newNode->next = (*tailNode);
        (*tailNode) = newNode;
    } else {
        newNode->next = (*tailNode)->next;
        (*tailNode)->next = newNode;
        (*tailNode) = newNode;
    }
}

void insert_Before_Node_CSLL(struct csll_node **tailNode, int newData, int flag) {
    struct csll_node *newNode = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode->data = newData;

    if((*tailNode) == NULL) { // no nodes
        newNode->next = newNode;
        (*tailNode) = newNode;
    } else if((*tailNode)->next == (*tailNode)) {
        (*tailNode)->next = newNode;
        newNode->next = (*tailNode);
    } else {
        struct csll_node *currentNode = *tailNode;
        
        while(currentNode->next->data != flag) {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;

        if(currentNode == (*tailNode)) // if newNode will be placed at the last position
            (*tailNode) = newNode;
    }
}

void insert_After_Node_CSLL(struct csll_node **tailNode, int newData, int flag) {
    struct csll_node *newNode = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode->data = newData;

    if((*tailNode) == NULL) { // no nodes
        newNode->next = newNode;
        (*tailNode) = newNode;
    } else if((*tailNode)->next == (*tailNode)) { // one node 
        (*tailNode)->next = newNode;
        newNode->next = (*tailNode);
        (*tailNode) = newNode;
    } else {
        struct csll_node *temp = (*tailNode);

        while(temp->data != flag) {
            temp = temp->next; 
        }

        newNode->next = temp->next;
        temp->next = newNode;

        if(temp == (*tailNode)) {
            (*tailNode) = newNode;
        }
    }

}

// TODO add free if there is only tail node
void delete_Head_CSLL(struct csll_node **tailNode) {
    if((*tailNode) == NULL) {
        return;
    } else if((*tailNode)->next == (*tailNode)) {
       (*tailNode) = NULL; 
    } else {
        struct csll_node *oldHead = (*tailNode)->next;

        (*tailNode)->next = oldHead->next;
        free(oldHead);
    }
}

void delete_Tail_CSLL(struct csll_node **tailNode) {
    if((*tailNode) == NULL) {
        return;
    } else if((*tailNode)->next == (*tailNode)) {
        (*tailNode) = NULL;
    } else {
        struct csll_node *oldTail = (*tailNode);
        struct csll_node *newTail = (*tailNode);

        while(newTail->next != oldTail) {
            newTail = newTail->next;
        }

        newTail->next = oldTail->next;
        (*tailNode) = newTail;
        free(oldTail);
    }
}

// add check for removing node will result to only one remaining node
void delete_Node_By_Data_CSLL(struct csll_node **tailNode, int flag) {
    if((*tailNode) == NULL) {
        return;
    } else if((*tailNode)->next == (*tailNode)) {
        (*tailNode) = NULL;
    } else {
        struct csll_node *head = (*tailNode)->next;
        struct csll_node *currentNode = (*tailNode);
        struct csll_node *oldNode;

        while(currentNode->next->data != flag) {
            currentNode = currentNode->next;
        }
        oldNode = currentNode->next;
        currentNode->next = oldNode->next;
        free(oldNode);

        if(currentNode->next == head) {
            (*tailNode) = currentNode;
        }

    }
}

void delete_Before_Node_CSLL(struct csll_node **tailNode, int flag) {
    if((*tailNode) == NULL) {
        return;
    } else if((*tailNode)->next == (*tailNode)) {
        (*tailNode) = NULL;
    } else {
        struct csll_node *head = (*tailNode)->next;
        struct csll_node *currentNode = (*tailNode);
        struct csll_node *oldNode;

        while(currentNode->next->next->data != flag)  {
            currentNode = currentNode->next; 
        }

        oldNode = currentNode->next;
        currentNode->next = oldNode->next;
        free(oldNode);

        if(currentNode->next == head) {
            (*tailNode) = currentNode;
        }
    }
}

void delete_After_Node_CSLL(struct csll_node **tailNode, int flag) {
    if((*tailNode) == NULL) {
        return;
    } else if((*tailNode)->next == (*tailNode)) {
        (*tailNode) = NULL;
    } else {
        struct csll_node *head = (*tailNode)->next;
        struct csll_node *currentNode = (*tailNode);
        struct csll_node *oldNode;

        while(currentNode->data != flag)  {
            currentNode = currentNode->next; 
        }

        oldNode = currentNode->next;
        currentNode->next = oldNode->next;
        free(oldNode);

        if(currentNode->next == head) {
            (*tailNode) = currentNode;
        }
    }
}

// TODO find a better way for traversal
void traverse_CDLL_From_Head(struct cdll_node *nodeP) {
    if(nodeP != NULL) {
        struct cdll_node *start = nodeP;
        
        do {
            printf("%i ", nodeP->data);
            nodeP = nodeP->next;
        } while(nodeP != start);
    }
    
    printf("\n");
}

int get_Length_Of_CDLL(struct cdll_node *nodeP) {
    int i = 0;
    
    if(nodeP != NULL) {
        struct cdll_node *head = nodeP;
        do {
            i++;
            nodeP = nodeP->next;
        } while(nodeP != head);
    }

    return i;
}

bool search_Element_In_CDLL(struct cdll_node *nodeP, int data) {
    if(nodeP != NULL) {
        struct cdll_node *head = nodeP;
        do {
            if(nodeP->data == data) 
                return true;
            nodeP = nodeP->next;
        } while(nodeP != head);
    }

    return false;
}

void insert_At_Head_CDLL(struct cdll_node **headNode, int newData) {
    struct cdll_node *newNode = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode->data = newData;

    if((*headNode) == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        (*headNode) = newNode;
    } else if((*headNode)->next == (*headNode)) {
        newNode->next = (*headNode);
        newNode->prev = (*headNode);
        (*headNode)->next = newNode;
        (*headNode)->prev = newNode;
        (*headNode) = newNode;
    } else {
        struct cdll_node *currentNode = (*headNode);
        
        do { // go to the last node
            currentNode = currentNode->next;
        } while(currentNode->next != (*headNode));
        
        newNode->next = (*headNode);
        newNode->prev = currentNode;
        currentNode->next = newNode; 
        (*headNode)->prev = newNode;
        
        (*headNode) = newNode;
    }
}

void insert_At_Tail_CDLL(struct cdll_node **headNode, int newData) {
    struct cdll_node *newNode = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode->data = newData;

    if((*headNode) == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        (*headNode) = newNode;
    } else if((*headNode)->next == (*headNode)) {
        (*headNode)->next = newNode;
        (*headNode)->prev = newNode;
        newNode->next = (*headNode);
        newNode->prev = (*headNode);
    } else {
        struct cdll_node *currentNode = (*headNode);
        
        do { // go to the last node
            currentNode = currentNode->next;
        } while(currentNode != (*headNode)->prev);
        
        currentNode->next = newNode; 
        newNode->prev = currentNode;
        newNode->next = (*headNode);
        (*headNode)->prev = newNode;
    }
}

void insert_Before_Node_CDLL(struct cdll_node **headNode, int newData, int flag) {
    struct cdll_node *newNode = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode->data = newData;

    if((*headNode) == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        (*headNode) = newNode;
    } else if((*headNode)->next == (*headNode)) {
        newNode->next = (*headNode);
        newNode->prev = (*headNode);
        (*headNode)->next = newNode;
        (*headNode)->prev = newNode;
        (*headNode) = newNode;
    } else {
        struct cdll_node *currentNode = (*headNode);
        
        while(currentNode->next->data != flag) {
            currentNode = currentNode->next;
        }
        
        newNode->next = currentNode->next;
        newNode->prev = currentNode;
        currentNode->next->prev = newNode;
        currentNode->next = newNode; 

        if(newNode->next == (*headNode)) {
            (*headNode) = newNode;
        }
    }
}

void insert_After_Node_CDLL(struct cdll_node **headNode, int newData, int flag) {
    struct cdll_node *newNode = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode->data = newData;

    if((*headNode) == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        (*headNode) = newNode;
    } else if((*headNode)->next == (*headNode)) {
        newNode->next = (*headNode);
        newNode->prev = (*headNode);
        (*headNode)->next = newNode;
        (*headNode)->prev = newNode;
    } else {
        struct cdll_node *currentNode = (*headNode);
        
        while(currentNode->data != flag) {
            currentNode = currentNode->next;
        }
        
        newNode->next = currentNode->next;
        newNode->prev = currentNode;
        currentNode->next->prev = newNode;
        currentNode->next = newNode; 

        if(newNode->next == (*headNode)) {
            (*headNode) = newNode;
        }
    }
}

void delete_Head_CDLL(struct cdll_node **headNode) {
    if((*headNode) == NULL) {
        return;
    } else if((*headNode)->next == (*headNode)) {
        struct cdll_node *oldHead = (*headNode);
        (*headNode) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *oldHead = (*headNode);
        struct cdll_node *newHead = (*headNode)->next;
        
        newHead->prev = oldHead->prev;
        oldHead->prev->next = newHead;
        (*headNode) = newHead;

        free(oldHead);
    }
}

void delete_Tail_CDLL(struct cdll_node **headNode) {
    if((*headNode) == NULL) {
        return;
    } else if((*headNode)->next == (*headNode)) {
        struct cdll_node *oldHead = (*headNode);
        (*headNode) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *oldTail = (*headNode);
        struct cdll_node *newTail;

        while(oldTail->next != (*headNode)) {
            oldTail = oldTail->next;
        }
        
        newTail = oldTail->prev;
        newTail->next = oldTail->next;
        oldTail->next->prev = newTail;
        
        free(oldTail);
    }
}

void delete_Node_By_Data_CDLL(struct cdll_node **headNode, int flag) {
    if((*headNode) == NULL) {
        return;
    } else if((*headNode)->next == (*headNode)) {
        struct cdll_node *oldHead = (*headNode);
        (*headNode) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *oldNode = (*headNode);
        struct cdll_node *newNode;

        while(oldNode->data != flag) {
            oldNode = oldNode->next;
        }

        newNode = oldNode->next;
        newNode->prev = oldNode->prev;
        oldNode->prev->next = newNode;

        if(oldNode == (*headNode)) {
            (*headNode) = newNode;
        }

        free(oldNode);
    }
}

void delete_Before_Node_CDLL(struct cdll_node **headNode, int flag) {
    if((*headNode) == NULL) {
        return;
    } else if((*headNode)->next == (*headNode)) {
        struct cdll_node *oldHead = (*headNode);
        (*headNode) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *currentNode = (*headNode);
        struct cdll_node *oldNode;
        struct cdll_node *newNode;

        while(currentNode->data != flag) {
            currentNode = currentNode->next;
        }
        
        if(currentNode->prev == (*headNode)) {
            (*headNode) = newNode;
        }

        oldNode = currentNode->prev;
        newNode = currentNode->prev->prev;
        newNode->next = currentNode;
        currentNode->prev = newNode;

        free(oldNode);
   }
}

void delete_After_Node_CDLL(struct cdll_node **headNode, int flag) {
    if((*headNode) == NULL) {
        return;
    } else if((*headNode)->next == (*headNode)) {
        struct cdll_node *oldHead = (*headNode);
        (*headNode) = NULL;
        free(oldHead);
    } else {
        struct cdll_node *currentNode = (*headNode);
        struct cdll_node *oldNode;
        struct cdll_node *newNode;

        while(currentNode->data != flag) {
            currentNode = currentNode->next;
        }
        
        if(currentNode->next == (*headNode)) {
            (*headNode) = newNode;
        }

        oldNode = currentNode->next;
        newNode = currentNode->next->next;
        newNode->prev = currentNode;
        currentNode->next = newNode;

        free(oldNode);
    }
}
