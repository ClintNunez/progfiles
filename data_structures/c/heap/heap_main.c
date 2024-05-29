#include <stdio.h>

#include "custom_heap_header.h"

int main(int argc, char **argv) {
    Heap *heap_Ptr = new_Heap(8);

    insert_Node_Max(heap_Ptr, 17);
    insert_Node_Max(heap_Ptr, 5);
    insert_Node_Max(heap_Ptr, 6);
    insert_Node_Max(heap_Ptr, 1);
    insert_Node_Max(heap_Ptr, 4);
    insert_Node_Max(heap_Ptr, 2);
    insert_Node_Max(heap_Ptr, 13);

    printf("\nPrint max heap: ");
    print_Heap(heap_Ptr);

    return 0;
}
