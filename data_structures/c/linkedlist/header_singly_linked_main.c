#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct sll_node *header = (struct sll_node*) malloc(sizeof(struct sll_node));

    header->data = 0;

    printf("Insert at head:\n");
    insert_At_Head_GHLL(&header, 5);
    insert_At_Head_GHLL(&header, 4);
    insert_At_Head_GHLL(&header, 3);
    insert_At_Head_GHLL(&header, 2);
    insert_At_Head_GHLL(&header, 1);
    traverse_GHLL_From_Head(header);

    printf("Insert at tail:\n");
    insert_At_Tail_GHLL(&header, 7); 
    insert_At_Tail_GHLL(&header, 8); 
    insert_At_Tail_GHLL(&header, 9); 
    insert_At_Tail_GHLL(&header, 10); 
    traverse_GHLL_From_Head(header);
    
    printf("Insert using a given position:\n");
    insert_At_Position_GHLL(&header, 6, 5);
    insert_At_Position_GHLL(&header, 0, 0);
    insert_At_Position_GHLL(&header, 100, header->data - 1);
    traverse_GHLL_From_Head(header);

    printf("Length of header list: %i\n", header->data);

    printf("Search node:\n");
    int e = 3;
    if(search_Node_In_GHLL(header, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    e = 999;
    if(search_Node_In_GHLL(header, e)) {
        printf("\t%i found\n", e);
    } else {
        printf("\t%i not found\n", e);
    }

    printf("Get index of node:\n");
    e = 2;
    int res = get_Node_Index_In_GHLL(header, e);
    if(res >= 0) {
        printf("\t%i at index %i\n", e, res);
    } else {
        printf("\tNot found\n");
    }
    
    e = 777;
    res = get_Node_Index_In_GHLL(header, e);
    if(res >= 0) {
        printf("\t%i at index %i\n", e, res);
    } else {
        printf("\t%i not found\n", e);
    }

    printf("Delete head:\n");
    delete_Head_GHLL(&header);
    traverse_GHLL_From_Head(header);
      
    printf("Delete tail:\n");
    delete_Tail_GHLL(&header);
    traverse_GHLL_From_Head(header);

    printf("Delete using given position:\n");
    delete_At_Position_GHLL(&header, 3);
    traverse_GHLL_From_Head(header);

    delete_At_Position_GHLL(&header, 0);
    traverse_GHLL_From_Head(header);

    delete_At_Position_GHLL(&header, header->data - 1);
    traverse_GHLL_From_Head(header);

    printf("Length of header list: %i\n", header->data);

    printf("Test for edge cases:\n");
    struct sll_node *header1 = (struct sll_node*) malloc(sizeof(struct sll_node));
    header1->data = 0;
    traverse_GHLL_From_Head(header1);
    
    printf("Delete functions on empty list:\n");
    delete_Head_GHLL(&header1);
    delete_Tail_GHLL(&header1);
    delete_At_Position_GHLL(&header1, 0);

    printf("Normal insert:\n");
    insert_At_Position_GHLL(&header1, 1, 0);
    traverse_GHLL_From_Head(header1);

    printf("Insert and delete with position greater than list length:\n");
    insert_At_Position_GHLL(&header1, 9, 2);
    delete_At_Position_GHLL(&header1, 2);

    printf("Delete single node to make list null:\n");
    delete_Head_GHLL(&header1);
    traverse_GHLL_From_Head(header1);

    return 0;
}
