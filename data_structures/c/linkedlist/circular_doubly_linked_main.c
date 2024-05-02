#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct cdll_node *head = NULL;    

    insert_At_Head_CDLL(&head, 3);
    insert_At_Head_CDLL(&head, 2);
    insert_At_Head_CDLL(&head, 1);
    traverse_CDLL_From_Head(head);

    insert_At_Tail_CDLL(&head, 4);
    insert_At_Tail_CDLL(&head, 5);
    insert_At_Tail_CDLL(&head, 6);
    insert_At_Tail_CDLL(&head, 7);
    traverse_CDLL_From_Head(head);

    insert_Before_Node_CDLL(&head, 50, 3);
    insert_After_Node_CDLL(&head, 100, 3);
    traverse_CDLL_From_Head(head);

    printf("length of cdll: %i\n", get_Length_Of_CDLL(head));

    int e = 1;
    if(search_Node_In_CDLL(head, e)) {
        printf("%i found\n", e);
    } else {
        printf("%i not found\n", e);
    }
    
    e = 9;
    if(search_Node_In_CDLL(head, e)) {
        printf("%i found\n", e);
    } else {
        printf("%i not found\n", e);
    }

    delete_Head_CDLL(&head);
    delete_Tail_CDLL(&head);
    traverse_CDLL_From_Head(head);

    delete_Node_By_Data_CDLL(&head, 4);
    traverse_CDLL_From_Head(head);
    
    delete_Before_Node_CDLL(&head, 3);
    delete_After_Node_CDLL(&head, 3);
    traverse_CDLL_From_Head(head);

    printf("length of cdll after deletion: %i\n", get_Length_Of_CDLL(head));

    return 0;
}
