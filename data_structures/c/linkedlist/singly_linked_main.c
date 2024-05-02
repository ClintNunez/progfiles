#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct sll_node *head = NULL; 

    insert_At_Head(&head, 5);
    insert_At_Head(&head, 4);
    insert_At_Head(&head, 3);
    insert_At_Head(&head, 2);
    insert_At_Head(&head, 1);
    traverse_SLL_From_Head(head);
    
    insert_At_Tail(&head, 7);
    traverse_SLL_From_Head(head);

    insert_At_Position(&head, 6, 5);
    traverse_SLL_From_Head(head);

    int e = 3;
    if(search_Element_In_SLL(head, e)) {
        printf("%i found\n", e);
    } else {
        printf("not found\n");
    }

    e = 2;
    int res = get_Element_Index_In_SLL(head, 2);
    if(res >= 0) {
        printf("%i at index %i\n", e, res);
    } else {
        printf("Not found\n");
    }
    
    printf("Size of linked list: %i\n", get_Length_Of_SLL(head));

    delete_Head(&head);
    traverse_SLL_From_Head(head);

    delete_Tail(&head);
    traverse_SLL_From_Head(head);

    delete_At_Position(&head, 3);
    traverse_SLL_From_Head(head);

    printf("Size of linked list after deletion: %i\n", get_Length_Of_SLL(head));
    return 0;
}
