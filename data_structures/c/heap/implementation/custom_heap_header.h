#ifndef CUSTOM_HEAP_HEADER
#define CUSTOM_HEAP_HEADER

typedef struct heap {
    int *root, length, max_Length;
} Heap;

Heap *new_Heap(int length);

int peek(Heap *heap_Ptr);

void print_Heap(Heap *heap_Ptr);

Heap *insert_Node_Max(Heap *heap_Ptr, int data);
Heap *insert_Node_Min(Heap *heap_Ptr, int data);

Heap *delete_Root_Node_Max(Heap *heap_Ptr);
Heap *delete_Root_Node_Min(Heap *heap_Ptr);


#endif
