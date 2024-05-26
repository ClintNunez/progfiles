#include <stdio.h>
#include <stdlib.h>

#include "custom_binary_tree_header.h"

int main(int argc, char **argv) {
    Node *root = NULL;

    root = insert_Node(root, 1);
    root = insert_Node(root, 2);
    root = insert_Node(root, 3);
    root = insert_Node(root, 4);
    root = insert_Node(root, 5);

    printf("Initialized binary tree:\n");
    levelOrder_Traversal(root);

    root = delete_Node(root, 2);

    printf("Traversal after deleting a node:\n");
    levelOrder_Traversal(root);

    return 0;
}
