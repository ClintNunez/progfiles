#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

// TODO make all inserts return a head and tail pointer
int main() {
    struct dll_node *head = NULL; 

    insert_At_Head_DLL(&head, 3);
    insert_At_Head_DLL(&head, 2);
    insert_At_Head_DLL(&head, 1);

    traverse_DLL_From_Head(head);
    insert_At_Tail_DLL(&head, 4);
    insert_At_Tail_DLL(&head, 5);
    insert_At_Tail_DLL(&head, 6);

    traverse_DLL_From_Head(head);

    int e = 3, result;
    if(search_Element_In_DLL(head, e)) {
        printf("%i found\n", e);
    } else {
        printf("%i not found\n", e);
    }

    e = 2;
    result = get_Element_Index_In_DLL(head, e);

    if(result >= 0) {
        printf("%i found at index %i\n", e, result);
    } else {
        printf("%i not found\n", e);
    }

    printf("length of doubly linked list: %i\n", get_Length_Of_DLL(head));

    insert_At_Position_DLL(&head, 200, 2);
    traverse_DLL_From_Head(head);

    delete_Head_DLL(&head);
    traverse_DLL_From_Head(head);

    struct dll_node *tail = get_Tail_In_DLL(&head);

    delete_Tail_DLL(&head, &tail);
    traverse_DLL_From_Head(head);

    delete_At_Position_DLL(&head, 1);
    traverse_DLL_From_Head(head);

    return 0;
}
