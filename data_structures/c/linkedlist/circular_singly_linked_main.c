#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct csll_node *tail = NULL;
    
    printf("Insert at head:\n");
    insert_At_Head_CSLL(&tail, 4);
    insert_At_Head_CSLL(&tail, 3);
    insert_At_Head_CSLL(&tail, 2);
    insert_At_Head_CSLL(&tail, 1);
    traverse_CSLL_From_Tail(tail);

    printf("Insert at tail:\n");
    insert_At_Tail_CSLL(&tail, 5);
    insert_At_Tail_CSLL(&tail, 6);
    insert_At_Tail_CSLL(&tail, 7);
    insert_At_Tail_CSLL(&tail, 8);
    traverse_CSLL_From_Tail(tail);

    printf("Insert before the given node:\n");
    insert_Before_Node_CSLL(&tail, 10, 5);
    insert_Before_Node_CSLL(&tail, 10, 1);
    insert_Before_Node_CSLL(&tail, 10, 8);
    traverse_CSLL_From_Tail(tail);

    printf("Insert after the given node:\n");
    insert_After_Node_CSLL(&tail, 20, 5);
    insert_After_Node_CSLL(&tail, 20, 1);
    insert_After_Node_CSLL(&tail, 20, 8);
    traverse_CSLL_From_Tail(tail);

    printf("Length of CSLL: %i\n", get_Length_Of_CSLL(tail));

    int e = 4;
    if(search_Node_In_CSLL(tail, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    e = 999;
    if(search_Node_In_CSLL(tail, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    printf("Delete head:\n");
    delete_Head_CSLL(&tail);
    traverse_CSLL_From_Tail(tail);

    printf("Delete head:\n");
    delete_Tail_CSLL(&tail);
    traverse_CSLL_From_Tail(tail);

    printf("Delete node using given data:\n");
    delete_Node_By_Data_CSLL(&tail, 6);
    traverse_CSLL_From_Tail(tail);

    printf("Delete before and after given node:\n");
    delete_Before_Node_CSLL(&tail, 4);
    delete_After_Node_CSLL(&tail, 4);
    traverse_CSLL_From_Tail(tail);

    printf("Length of CSLL after deletion: %i\n", get_Length_Of_CSLL(tail));
    
    printf("Test for edge cases\n");
    struct csll_node *tail1 = NULL;
    traverse_CSLL_From_Tail(tail1);

    printf("Delete function on empty list:\n");
    delete_Head_CSLL(&tail1);
    delete_Tail_CSLL(&tail1);
    delete_Node_By_Data_CSLL(&tail1, 1);
    delete_Before_Node_CSLL(&tail1, 1);
    delete_After_Node_CSLL(&tail1, 1);

    printf("Deleting a node to make a one element list:\n");
    insert_At_Head_CSLL(&tail1, 2);
    insert_At_Head_CSLL(&tail1, 1);
    traverse_CSLL_From_Tail(tail1);

    delete_Node_By_Data_CSLL(&tail1, 1);
    traverse_CSLL_From_Tail(tail1);
    
    insert_At_Head_CSLL(&tail1, 1);
    traverse_CSLL_From_Tail(tail1);

    delete_Node_By_Data_CSLL(&tail1, 2);
    traverse_CSLL_From_Tail(tail1);

    printf("Delete last node to make list null:\n");
    delete_Head_CSLL(&tail1);
    traverse_CSLL_From_Tail(tail1);

    return 0;
}
