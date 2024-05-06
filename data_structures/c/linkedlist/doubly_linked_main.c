#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct dll_node *head = NULL; 

    printf("Insert at head:\n");
    insert_At_Head_DLL(&head, 5);
    insert_At_Head_DLL(&head, 4);
    insert_At_Head_DLL(&head, 3);
    insert_At_Head_DLL(&head, 2);
    insert_At_Head_DLL(&head, 1);
    traverse_DLL_From_Head(head);

    printf("Insert at tail:\n");
    insert_At_Tail_DLL(&head, 7);
    insert_At_Tail_DLL(&head, 8);
    insert_At_Tail_DLL(&head, 9);
    insert_At_Tail_DLL(&head, 10);
    traverse_DLL_From_Head(head);

    printf("Insert using a given position:\n");
    insert_At_Position_DLL(&head, 200, 4);
    insert_At_Position_DLL(&head, 0, 0);
    insert_At_Position_DLL(&head, 100, get_Length_Of_DLL(head));
    traverse_DLL_From_Head(head);

    printf("Length of doubly linked list: %i\n", get_Length_Of_DLL(head));

    printf("Search node:\n");
    int e = 3, result;
    if(search_Node_In_DLL(head, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    e = 400;
    if(search_Node_In_DLL(head, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    printf("Get index of node:\n");
    e = 2;
    result = get_Node_Index_In_DLL(head, e);
    if(result >= 0) {
        printf("\t%i found at index %i\n", e, result);
    } else {
        printf("\t%i not found\n", e);
    }

    e = 999;
    result = get_Node_Index_In_DLL(head, e);
    if(result >= 0) {
        printf("\t%i found at index %i\n", e, result);
    } else {
        printf("\t%i not found\n", e);
    }

    printf("Delete head:\n");
    delete_Head_DLL(&head);
    traverse_DLL_From_Head(head);

    struct dll_node *tail = get_Tail_In_DLL(&head);

    printf("Delete tail:\n");
    delete_Tail_DLL(&head, &tail);
    traverse_DLL_From_Head(head);

    printf("Delete using given position:\n");
    delete_At_Position_DLL(&head, 3);
    traverse_DLL_From_Head(head);

    delete_At_Position_DLL(&head, 0);
    traverse_DLL_From_Head(head);

    delete_At_Position_DLL(&head, get_Length_Of_DLL(head) - 1);
    traverse_DLL_From_Head(head);

    printf("Length of doubly linked list after deletion: %i\n", get_Length_Of_DLL(head));

    printf("Test for edge cases:\n");
    struct dll_node *head1 = NULL;
    struct dll_node *tail1 = get_Tail_In_DLL(&head1);
    traverse_DLL_From_Head(head1);

    printf("Delete functions on empty list:\n");
    delete_Head_DLL(&head1);
    delete_Tail_DLL(&head1, &tail1);
    delete_At_Position_DLL(&head1, 0);

    printf("Normal insert:\n");
    insert_At_Position_DLL(&head1, 1, 0);
    traverse_DLL_From_Head(head1);
    
    printf("Insert and delete with position greater than list length:\n");
    insert_At_Position_DLL(&head1, 777, 100);
    delete_At_Position_DLL(&head1, 100);

    printf("Delete single node to make list null:\n");
    delete_Head_DLL(&head1);
    traverse_DLL_From_Head(head1);

    return 0;
}
