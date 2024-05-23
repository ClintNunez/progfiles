#include <stdio.h>
#include <stdlib.h>

#include "custom_binary_tree_header.h"

Node *new_Node(int data) {
    Node *newNode = malloc(sizeof(Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node_Queue *new_Node_Queue(Node *node) {
    Node_Queue *new_Node_Queue;
    new_Node_Queue->nodePtr = node->left;
    new_Node_Queue->next = NULL;

    return new_Node_Queue;
}

void insert_Node(Node *root, int data) {
    if(root == NULL) {
        printf("reached\n");
        root = new_Node(data);
    } else {
        /*
        Make an array of nodes
        if the current node->left is null save new node
        else add the pointer to node->left to the array
        if the current node->right is null save new node
        else add the pointer to node->right to the array

        this algorithm makes sure that nodes that contains left or right nodes will be checked until there is a node that points to a null
        */
        Node_Queue *node_Queue = malloc(sizeof(Node_Queue*));
        node_Queue->nodePtr = root;
        node_Queue->next = NULL;
        Node *currentNode;
        while(node_Queue != NULL) {
            currentNode = node_Queue->nodePtr;
            if(currentNode->left == NULL) {
                currentNode->left = new_Node(data);
                break;
            } else {
                node_Queue->next = new_Node_Queue(currentNode->left);
            }
            if(currentNode->right == NULL) {
                currentNode->right = new_Node(data);
                break;
            } else {
                node_Queue->next = new_Node_Queue(currentNode->right);
            }
            node_Queue = node_Queue->next;
        }
    }
}

Node *delete_Deepest_Node(Node *root, int key) {

}

Node *delete_Node(Node *root, int key) {
    /*
    if(root == null) return null
    if(root->left & root->right == null) if(data == key) return null else return root 

    
    
     
    */
    
}

void inorder_Traversal(Node *root) {

} 

void levelOrder_Traversal(Node *root) {
    if(root != NULL) {
        Node_Queue *node_Queue = malloc(sizeof(Node_Queue*));
        node_Queue->nodePtr = root;
        node_Queue->next = NULL;
        Node *currentNode;

        while(node_Queue != NULL) {
            currentNode = node_Queue->nodePtr;
            printf("%i ", currentNode->data);
            if(currentNode->left) {
                node_Queue->next = new_Node_Queue(currentNode->left);
            }             
            if(currentNode->right) {
                node_Queue->next = new_Node_Queue(currentNode->right);
            }             
            node_Queue = node_Queue->next;
        }
        
    } else {
        printf("\tBinary tree empty\n");
    }
}
