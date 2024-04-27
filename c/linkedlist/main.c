#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct node *head = NULL; 

    // give address of head 
    insert_At_Head(&head, 1);
    insert_At_Head(&head, 2);
    insert_At_Head(&head, 7);
    insert_At_Head(&head, 8);
    insert_At_Head(&head, 9);

    traverse_Linked_List_From_Head(head);
    
    insert_At_Tail(&head, 3);

    traverse_Linked_List_From_Head(head);

    insert_At_Position(&head, 6, 1);

    traverse_Linked_List_From_Head(head);

    int e = 3;
    if(search_Element_In_Linked_List(head, e)) {
        printf("%i Found\n", e);
    } else {
        printf("Not found\n");
    }

    e = 2;
    int res = get_Element_Index_In_Linked_List(head, 2);
    if(res >= 0) {
        printf("%i at index %i\n", e, res);
    } else {
        printf("Not found\n");
    }
    
    printf("Size of linked list: %i\n", get_Length_Of_Linked_List(head));

    delete_Head(&head);
    traverse_Linked_List_From_Head(head);

    delete_Tail(&head);
    traverse_Linked_List_From_Head(head);

    delete_At_Position(&head, 3);
    traverse_Linked_List_From_Head(head);

    return 0;
}
