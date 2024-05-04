#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct sll_node *head = NULL; 

    printf("Insert at head:\n");
    insert_At_Head(&head, 5);
    insert_At_Head(&head, 4);
    insert_At_Head(&head, 3);
    insert_At_Head(&head, 2);
    insert_At_Head(&head, 1);
    traverse_SLL_From_Head(head);
    
    printf("Insert at tail:\n");
    insert_At_Tail(&head, 7);
    insert_At_Tail(&head, 8);
    insert_At_Tail(&head, 9);
    insert_At_Tail(&head, 10);
    traverse_SLL_From_Head(head);

    printf("Insert using a given position:\n");
    insert_At_Position(&head, 6, 5);
    insert_At_Position(&head, 0, 0);
    insert_At_Position(&head, 100, get_Length_Of_SLL(head) - 1);
    traverse_SLL_From_Head(head);

    printf("Search node:\n");
    int e = 3;
    if(search_Node_In_SLL(head, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    e = 999;
    if(search_Node_In_SLL(head, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    printf("Get index of node:\n");
    e = 2;
    int res = get_Node_Index_In_SLL(head, e);
    if(res >= 0) {
        printf("\t%i at index %i\n", e, res);
    } else {
        printf("\tNot found\n");
    }
    
    e = 777;
    res = get_Node_Index_In_SLL(head, e);
    if(res >= 0) {
        printf("\t%i at index %i\n", e, res);
    } else {
        printf("\t%i not found\n", e);
    }
    
    printf("Size of linked list: %i\n", get_Length_Of_SLL(head));

    printf("Delete head:\n");
    delete_Head(&head);
    traverse_SLL_From_Head(head);

    printf("Delete tail:\n");
    delete_Tail(&head);
    traverse_SLL_From_Head(head);

    printf("Delete using given position:\n");
    delete_At_Position(&head, 3);
    traverse_SLL_From_Head(head);

    delete_At_Position(&head, 0);
    traverse_SLL_From_Head(head);

    delete_At_Position(&head, get_Length_Of_SLL(head) - 1);
    traverse_SLL_From_Head(head);

    printf("Size of linked list after deletion: %i\n", get_Length_Of_SLL(head));

    // test insertion and deletion for empty and 1 node list
    printf("Test for edge cases:\n");
    struct sll_node *head1 = NULL;
    traverse_SLL_From_Head(head1);
    
    printf("Delete functions on empty list:\n");
    delete_Head(&head1);
    delete_Tail(&head1);
    delete_At_Position(&head1, 0);

    printf("Insert and delete with position greater than list length:\n");
    insert_At_Position(&head1, 9, 1);
    delete_At_Position(&head1, 2);

    printf("Normal insert:\n");
    insert_At_Position(&head1, 1, 0);
    traverse_SLL_From_Head(head1);

    printf("Delete single node to make list null:\n");
    delete_Head(&head1);
    traverse_SLL_From_Head(head1);

    return 0;
}
