#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct sll_node *header = (struct sll_node*) malloc(sizeof(struct sll_node));

    header->data = 0;

    printf("Insert at head:\n");
    insert_At_Head_CHLL(&header, 5);
    insert_At_Head_CHLL(&header, 4);
    insert_At_Head_CHLL(&header, 3);
    insert_At_Head_CHLL(&header, 2);
    insert_At_Head_CHLL(&header, 1);
    traverse_CHLL_From_Head(header);

    printf("Insert at tail:\n");
    insert_At_Tail_CHLL(&header, 6); 
    insert_At_Tail_CHLL(&header, 7); 
    insert_At_Tail_CHLL(&header, 8); 
    insert_At_Tail_CHLL(&header, 9); 
    insert_At_Tail_CHLL(&header, 10); 
    traverse_CHLL_From_Head(header);
    
    printf("Insert before the given node:\n");
    insert_Before_Node_CHLL(&header, 10, 5);
    insert_Before_Node_CHLL(&header, 10, 1);
    insert_Before_Node_CHLL(&header, 10, 8);
    traverse_CHLL_From_Head(header);

    printf("Insert after the given node:\n");
    insert_After_Node_CHLL(&header, 20, 5);
    insert_After_Node_CHLL(&header, 20, 1);
    insert_After_Node_CHLL(&header, 20, 8);
    traverse_CHLL_From_Head(header);

    printf("Length of header list: %i\n", header->data);

    printf("Search node:\n");
    int e = 3;
    if(search_Node_In_CHLL(header, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    e = 999;
    if(search_Node_In_CHLL(header, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    printf("Delete head:\n");
    delete_Head_CHLL(&header);
    traverse_CHLL_From_Head(header);
      
    printf("Delete tail:\n");
    delete_Tail_CHLL(&header);
    traverse_CHLL_From_Head(header);

    printf("Delete node using given data:\n");
    delete_Node_By_Data_CHLL(&header, 6);
    traverse_CHLL_From_Head(header);

    printf("Length of header list: %i\n", header->data);

    printf("Test for edge cases:\n");
    struct sll_node *header1 = (struct sll_node*) malloc(sizeof(struct sll_node));
    header1->data = 0;
    traverse_CHLL_From_Head(header1);
    
    printf("Delete functions on empty list:\n");
    delete_Head_CHLL(&header1);
    delete_Tail_CHLL(&header1);
    delete_Node_By_Data_CHLL(&header1, 0);

    printf("Normal insert:\n");
    insert_At_Head_CHLL(&header1, 1);
    traverse_CHLL_From_Head(header1);

    printf("Insert Before and After and deleting a non existent node:\n");
    insert_Before_Node_CHLL(&header1, 2, 2);
    insert_After_Node_CHLL(&header1, 2, 2);
    delete_Node_By_Data_CHLL(&header1, 2);

    printf("Delete single node to make list null:\n");
    delete_Head_CHLL(&header1);
    traverse_CHLL_From_Head(header1);

    return 0;
}
