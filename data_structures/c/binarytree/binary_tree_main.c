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

    printf("Level Order traversal: ");
    levelOrder_Traversal(root);
    printf("\nInorder traversal: ");
    inorder_Traversal(root);
    printf("\nPreOrder traversal: ");
    preOrder_Traversal(root);
    printf("\nPostOrder Order traversal: ");
    postOrder_Traversal(root);

    root = delete_Node(root, 2);

    printf("\nLevel order traversal after deleting a node: ");
    levelOrder_Traversal(root);

    return 0;
}
