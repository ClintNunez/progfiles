#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


// starts at the head
void traverse_Linked_List_From_Head(struct node *nodeP) {
    while(nodeP != NULL) {
        printf("%i ", nodeP->data);
        nodeP = nodeP->next;
    }
}

void insert_Node_At_Head(struct node *headNode, int newData) {
    // allocating memory and converting to a pointer (?)
    struct node *newNode = (struct node*) malloc(sizeof(struct node)); 
    
    newNode->data = newData;

    newNode->next = headNode->next;
    
    headNode->next = newNode;

}

int main() {
    struct node *head = NULL;

    insert_Node_At_Head(head, 1);
    insert_Node_At_Head(head, 2);

    traverse_Linked_List_From_Head(head);

    return 0;
}
