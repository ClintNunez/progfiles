#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct header_node_sll *header = (struct header_node_sll*) malloc(sizeof(struct header_node_sll));

    header->length = 0;

    insert_At_Head_Header_SLL(&header, 3);
    insert_At_Head_Header_SLL(&header, 2);
    insert_At_Head_Header_SLL(&header, 1);
    traverse_Header_SLL_From_Head(header);

    insert_At_Tail_Header_SLL(&header, 4); 
    insert_At_Tail_Header_SLL(&header, 5); 
    insert_At_Tail_Header_SLL(&header, 6); 
    traverse_Header_SLL_From_Head(header);
    
    insert_At_Position_Header_SLL(&header, 0, 0);
    insert_At_Position_Header_SLL(&header, 7, 6);
    insert_At_Position_Header_SLL(&header, 900, 1);
    traverse_Header_SLL_From_Head(header);

    printf("%i\n", header->length);

    delete_Head_Header_SLL(&header);
    traverse_Header_SLL_From_Head(header);
      
    delete_Tail_Header_SLL(&header);
    traverse_Header_SLL_From_Head(header);

    delete_At_Position_Header_SLL(&header, 0);
    delete_At_Position_Header_SLL(&header, header->length - 1);
    delete_At_Position_Header_SLL(&header, 3);
    traverse_Header_SLL_From_Head(header);
    printf("%i\n", header->length);

    return 0;
}
