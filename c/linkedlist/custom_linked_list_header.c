#include <stdio.h>
#include <stdlib.h>
#include "custom_linked_list_header.h"

// starts at the head
void traverse_Linked_List_From_Head(struct node *nodeP) {
    while(nodeP != NULL) {
        printf("%i ", nodeP->data);
        nodeP = nodeP->next;
    }
    printf("\n");
}

void insert_At_Head(struct node **headNode, int newData) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node)); 

    newNode->data = newData;

    // point the newNode to the current value of headNode
    newNode->next = *headNode;
    
    // change the value of headNode to the newNode
    *headNode = newNode;
}

void insert_At_Tail(struct node **headNode, int newData) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node)); 
    struct node *tail = *headNode; 

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

void insert_At_Position(struct node **headNode, int newData, int pos) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node)); 

    newNode->data = newData;

    // this is basically inserting at head
    if(pos == 0 || *headNode == NULL) {
        newNode->next = *headNode;
        *headNode = newNode;
        return;
    }

    struct node *current = *headNode; 
    
    for(int i = 1; i < pos && current->next != NULL; i++) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}
