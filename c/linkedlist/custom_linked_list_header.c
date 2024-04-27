#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "custom_linked_list_header.h"

// starts at the head
void traverse_Linked_List_From_Head(struct node *nodeP) {
    while(nodeP != NULL) {
        printf("%i ", nodeP->data);
        nodeP = nodeP->next;
    }
    printf("\n");
}

int get_Length_Of_Linked_List(struct node *nodeP) {
    int i = 0;
    for(; nodeP != NULL; i++) {
        nodeP = nodeP->next;
    }

    return i;
}

bool search_Element_In_Linked_List(struct node *nodeP, int element) {
    while(nodeP != NULL) {
        if(nodeP->data == element) {
            return true;
        }
        nodeP = nodeP->next;
    }    

    return false;
}

int get_Element_Index_In_Linked_List(struct node *nodeP, int element) {

    for(int i = 0; nodeP != NULL; i++) {
        if(nodeP->data == element) {
            return i;
        }
        nodeP = nodeP->next;
    }

    return -1;
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

void delete_Head(struct node **headNode) {
    if(*headNode == NULL) {
        printf("Linked list is already empty.\n");
        return;
    } 

    struct node *temp = *headNode;

    *headNode = (*headNode)->next;

    free(temp);
}

void delete_Tail(struct node **headNode) {
    if(*headNode == NULL) {
        printf("Linked list is already empty.\n");
        return;
    } 

    struct node *temp = *headNode;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    struct node *tail = temp->next;

    temp->next = NULL;

    free(tail);
}

void delete_At_Position(struct node **headNode, int pos) {
    struct node *temp = *headNode;

    if(*headNode == NULL) {
        printf("Linked list is already empty.\n");
        return;
    } else if(pos == 0) {
        *headNode = (*headNode)->next;

        free(temp);
    } 

    // temp is a pointer to the headnode 
    // *temp = *temp->next removes the previous nodes since instead of only changing the pointer,
    // the value of the headnode is directly changed to what is the next node; 
    for(int i = 1; i < pos && temp->next != NULL; i++) {
        temp = temp->next;  
    } 

    struct node *remove = temp->next;

    temp->next = temp->next->next;

    free(remove);
}
