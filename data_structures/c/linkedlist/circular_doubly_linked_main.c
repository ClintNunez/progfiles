#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct cdll_node *head = NULL;    

    printf("Insert at head:\n");
    insert_At_Head_CDLL(&head, 4);
    insert_At_Head_CDLL(&head, 3);
    insert_At_Head_CDLL(&head, 2);
    insert_At_Head_CDLL(&head, 1);
    traverse_CDLL_From_Head(head);

    printf("Insert at head:\n");
    insert_At_Tail_CDLL(&head, 5);
    insert_At_Tail_CDLL(&head, 6);
    insert_At_Tail_CDLL(&head, 7);
    insert_At_Tail_CDLL(&head, 8);
    traverse_CDLL_From_Head(head);

    printf("Insert before the given node:\n");
    insert_Before_Node_CDLL(&head, 10, 5);
    insert_Before_Node_CDLL(&head, 10, 1);
    insert_Before_Node_CDLL(&head, 10, 8);
    traverse_CDLL_From_Head(head);

    printf("Insert after the given node:\n");
    insert_After_Node_CDLL(&head, 20, 5);
    insert_After_Node_CDLL(&head, 20, 1);
    insert_After_Node_CDLL(&head, 20, 8);
    traverse_CDLL_From_Head(head);

    printf("Length of cdll: %i\n", get_Length_Of_CDLL(head));

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
    
    printf("Delete head:\n");
    delete_Head_CDLL(&head);
    traverse_CDLL_From_Head(head);

    printf("Delete tail:\n");
    delete_Tail_CDLL(&head);
    traverse_CDLL_From_Head(head);

    printf("Delete using given data:\n");
    delete_Node_By_Data_CDLL(&head, 4);
    traverse_CDLL_From_Head(head);
    
    printf("Delete befure and after given data:\n");
    delete_Before_Node_CDLL(&head, 3);
    delete_After_Node_CDLL(&head, 3);
    traverse_CDLL_From_Head(head);

    printf("Length of cdll after deletion: %i\n", get_Length_Of_CDLL(head));

    printf("Test for edge cases\n");
    struct cdll_node *tail1 = NULL;
    traverse_CDLL_From_Head(tail1);

    printf("Delete function on empty list:\n");
    delete_Head_CDLL(&tail1);
    delete_Tail_CDLL(&tail1);
    delete_Node_By_Data_CDLL(&tail1, 1);
    delete_Before_Node_CDLL(&tail1, 1);
    delete_After_Node_CDLL(&tail1, 1);

    printf("Deleting a node to make a one element list:\n");
    insert_At_Head_CDLL(&tail1, 2);
    insert_At_Head_CDLL(&tail1, 1);
    traverse_CDLL_From_Head(tail1);

    delete_Node_By_Data_CDLL(&tail1, 1);
    traverse_CDLL_From_Head(tail1);
    
    insert_At_Head_CDLL(&tail1, 1);
    traverse_CDLL_From_Head(tail1);

    delete_Node_By_Data_CDLL(&tail1, 2);
    traverse_CDLL_From_Head(tail1);

    printf("Delete last node to make list null:\n");
    delete_Head_CDLL(&tail1);
    traverse_CDLL_From_Head(tail1);

    return 0;
}
