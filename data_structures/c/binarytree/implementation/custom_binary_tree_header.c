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
    if (root == NULL) {
        return new_Node(data);
    } 

    Node_Queue *queue_Front = new_Node_Queue(root);
    Node_Queue *queue_Rear = queue_Front;

    while (queue_Front != NULL) {
        Node *current_Node = queue_Front->nodePtr;

        if (current_Node->left == NULL) {
            current_Node->left = new_Node(data);
            break;
        } else {
            queue_Rear->next = new_Node_Queue(current_Node->left);
            queue_Rear = queue_Rear->next;
        }

        if (current_Node->right == NULL) {
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

Node *delete_Deepest_Node(Node *root, Node *deepest_Node) {
    Node_Queue *queue_Front = new_Node_Queue(root);
    Node_Queue *queue_Rear = queue_Front;

    while(queue_Front != NULL) {
        Node *current_Node = queue_Front->nodePtr;

        if(current_Node == deepest_Node) {
            current_Node = NULL; 
            free(deepest_Node);
            return root; 
        }

        if(current_Node->left) {
            if(current_Node->left == deepest_Node) {
                Node *target_Node = current_Node->left;
                current_Node->left = NULL;
                free(target_Node);
                return root;
            } else {
                queue_Rear->next = new_Node_Queue(current_Node->left);
                queue_Rear = queue_Rear->next;
            }

        } 

        if(current_Node->right) {
            if(current_Node->right == deepest_Node) {
                Node *target_Node = current_Node->right;
                current_Node->right = NULL;
                free(target_Node);
                return root;
            } else {
                queue_Rear->next = new_Node_Queue(current_Node->right);
                queue_Rear = queue_Rear->next;
            }  
        }        

        Node_Queue *temp = queue_Front;
        queue_Front = queue_Front->next;
        free(temp);
    }

    return root;
}


Node *delete_Node(Node *root, int key) {
    if(root == NULL) {
        return root;
    } 

    if(root->left == NULL && root->right == NULL) {
        if(root->data == key) {
            free(root);
            return NULL;
        } else {
            return root;
        }
    }

    Node_Queue *queue_Front = new_Node_Queue(root);
    Node_Queue *queue_Rear = queue_Front;
    Node *target_Node = NULL;
    Node *current_Node;

    while(queue_Front != NULL) {
        current_Node = queue_Front->nodePtr;

        if(current_Node->data == key) {
            target_Node = current_Node;
        }

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

    if(target_Node != NULL) {
        int x = current_Node->data;
        target_Node->data = x;
        root = delete_Deepest_Node(root, current_Node);
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

void inorder_Traversal(Node *root) {
    if(root == NULL) {
        return;
    } 
    inorder_Traversal(root->left);
    printf("%i ", root->data);
    inorder_Traversal(root->right);
}

void preOrder_Traversal(Node *root) {
    if(root == NULL) {
        return;
    } 
    printf("%i ", root->data);
    preOrder_Traversal(root->left);
    preOrder_Traversal(root->right);
}

void postOrder_Traversal(Node *root) {
    if(root == NULL) {
        return;
    } 
    postOrder_Traversal(root->left);
    postOrder_Traversal(root->right);
    printf("%i ", root->data);
}
