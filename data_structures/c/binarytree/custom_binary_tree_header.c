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

void insert_Node(Node *root, int data) {
    if(root == NULL) {
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
    }
}

void delete_Node(Node *root, int key) {
    
}

void inorder_Traversal(Node *root) {

} 
