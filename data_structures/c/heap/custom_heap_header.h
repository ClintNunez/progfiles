#ifndef CUSTOM_HEAP_HEADER
#define CUSTOM_HEAP_HEADER

typedef struct heap {
    int *root, length, max_Length;
} Heap;

Heap *new_Heap(int length);

void heapify_Up_Max(int length);
void heapify_Up_Min(int length);

void heapify_Down_Max(int length);
void heapify_Down_Min(int length);

Heap *insert_Node_Max(Heap *heapPtr, int data);
Heap *insert_Node_Min(Heap *heapPtr, int data);

Heap *delete_Root_Node_Max(Heap *heapPtr, int data);
Heap *delete_Root_Node_Min(Heap *heapPtr, int data);

int peek(Heap *heapPtr);

#endif
