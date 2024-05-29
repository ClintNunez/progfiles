#include <stdio.h>

#include "custom_heap_header.h"

int main(int argc, char **argv) {
    Heap *heap_Ptr_Max = new_Heap(8);

    insert_Node_Max(heap_Ptr_Max, 17);
    insert_Node_Max(heap_Ptr_Max, 5);
    insert_Node_Max(heap_Ptr_Max, 6);
    insert_Node_Max(heap_Ptr_Max, 1);
    insert_Node_Max(heap_Ptr_Max, 4);
    insert_Node_Max(heap_Ptr_Max, 2);
    insert_Node_Max(heap_Ptr_Max, 13);

    printf("\nPrint max heap: ");
    print_Heap(heap_Ptr_Max);

    Heap *heap_Ptr_Min = new_Heap(8);

    insert_Node_Min(heap_Ptr_Min, 1);
    insert_Node_Min(heap_Ptr_Min, 5);
    insert_Node_Min(heap_Ptr_Min, 6);
    insert_Node_Min(heap_Ptr_Min, 2);
    insert_Node_Min(heap_Ptr_Min, 4);
    insert_Node_Min(heap_Ptr_Min, 3);
    insert_Node_Min(heap_Ptr_Min, 8);

    printf("\nPrint min heap: ");
    print_Heap(heap_Ptr_Min);


    return 0;
}
