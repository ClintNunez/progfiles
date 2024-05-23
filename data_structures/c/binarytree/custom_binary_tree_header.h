#ifndef CUSTOM_BINARY_TREE_HEADER
#define CUSTOM_BINARY_TREE_HEADER

typedef struct node {
    int data;
    struct node *left, *right;
} Node;

typedef struct node_queue{
    Node *nodePtr;
    struct node_queue *next;
} Node_Queue;

Node *new_Node(int data);
Node_Queue *new_Node_Queue(Node *node);

void insert_Node(Node *root, int data);
Node *delete_Deepest_Node(Node *root, int data);
Node *delete_Node(Node *root, int data);

void levelOrder_Traversal(Node *root);
void inorder_Traversal(Node *root);
void preOrder_Traversal(Node *root);
void postOrder_Traversal(Node *root);

#endif
