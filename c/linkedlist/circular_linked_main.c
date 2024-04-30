#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_header.h"

int main() {
    struct csll_node *head = NULL;
    struct csll_node *tail = NULL;
    
    insert_At_Head_CSLL(&tail, 3);
    insert_At_Head_CSLL(&tail, 2);
    insert_At_Head_CSLL(&tail, 1);
    insert_At_Head_CSLL(&tail, 8);
    traverse_CSLL_From_Head(tail);

    insert_At_Tail_CSLL(&tail, 4);
    traverse_CSLL_From_Head(tail);

    insert_Before_Node_CSLL(&tail, 200, 4);
    insert_Before_Node_CSLL(&tail, 2500, 8);
    traverse_CSLL_From_Head(tail);

    insert_After_Node_CSLL(&tail, 70, 2500);
    traverse_CSLL_From_Head(tail);

    int e = 4;
    if(search_Element_In_CSLL(tail, e)) {
        printf("%i found\n", e);
    } else {
        printf("%i not found\n", e);
    }

    return 0;
}
