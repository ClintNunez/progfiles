#include <stdio.h>
#include <stdlib.h>

#include "custom_binary_tree_header.h"

Node *new_Node(int data) {
    Node *new_Node = malloc(sizeof(Node));
    new_Node->data = data;
    new_Node->left = NULL;
    new_Node->right = NULL;
    return new_Node;
}

Node_Queue *new_Node_Queue(Node *node) {
    Node_Queue *new_Node_Queue = malloc(sizeof(Node_Queue));
    new_Node_Queue->nodePtr = node;
    new_Node_Queue->next = NULL;
    return new_Node_Queue;
}

Node *insert_Node(Node *root, int data) {
    if(root == NULL) {
        root = new_Node(data);
        return root;
    } 

    Node_Queue *queue_Front = new_Node_Queue(root);
    Node_Queue *queue_Rear = queue_Front;

    while(queue_Front != NULL) {
        Node *current_Node = queue_Front->nodePtr;
        if(current_Node->left == NULL) {
            current_Node->left = new_Node(data);
            break;
        } else {
            queue_Rear->next = new_Node_Queue(current_Node->left);
            queue_Rear = queue_Rear->next;
        }
        if(current_Node->right == NULL) {
            current_Node->right = new_Node(data);
            break;
        } else {
            queue_Rear->next = new_Node_Queue(current_Node->right);
            queue_Rear = queue_Rear->next;
        }
        
        Node_Queue *temp = queue_Front;
        queue_Front = queue_Front->next;
        free(temp);
    }

    return root;

}

void levelOrder_Traversal(Node *root) {
    if(root == NULL) {
        printf("\tBinary tree empty\n");
        return;
    } 
    
    Node_Queue *queue_Front = new_Node_Queue(root);
    Node_Queue *queue_Rear = queue_Front;

    while(queue_Front != NULL) {
        Node *current_Node = queue_Front->nodePtr;
        printf("%i ", current_Node->data);

        if(current_Node->left) {
            queue_Rear->next = new_Node_Queue(current_Node->left);
            queue_Rear = queue_Rear->next;
        }             
        if(current_Node->right) {
            queue_Rear->next = new_Node_Queue(current_Node->right);
            queue_Rear = queue_Rear->next;
        }             
         
        Node_Queue *temp = queue_Front;
        queue_Front = queue_Front->next;
        free(temp);
    }
}
