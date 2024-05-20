#ifndef CUSTOM_BINARY_TREE_HEADER
#define CUSTOM_BINARY_TREE_HEADER

typedef struct node {
    int data;
    struct node *left, *right;
} Node;

Node *new_Node(int data);
void insert_Node(Node *root, int data);
void delete_Node(Node *root, int data);

void inorder_Traversal(Node *root);
void preOrder_Traversal(Node *root);
void postOrder_Traversal(Node *root);
void levelOrder_Traversal(Node *root);

#endif
