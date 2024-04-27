#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "custom_linked_list_header.h"

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
