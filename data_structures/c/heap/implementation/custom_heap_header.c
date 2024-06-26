#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_heap_header.h"

Heap *new_Heap(int length) {
    Heap *newHeap = malloc(sizeof(Heap));
    int *arr = malloc(sizeof(int) * length);
    newHeap->root = arr;
    newHeap->max_Length = length;
    newHeap->length = 0;
    return newHeap;
}

int peek(Heap *heap_Ptr) {
    return *(heap_Ptr->root);
}

void print_Heap(Heap *heap_Ptr) {
    int *arr = heap_Ptr->root;
    for(int i = 0; i < heap_Ptr->length; i++) {
        printf("%i ", arr[i]);
    }
}

Heap *heapify_Up_Max(Heap *heap_Ptr, int current_Index) {
    int *arr = heap_Ptr->root;

    if(current_Index == 0) {
        return heap_Ptr;
    }

    int parentIndex = (current_Index - 1) / 2;

    if(arr[current_Index] > arr[parentIndex]) {
        int temp = arr[current_Index];
        arr[current_Index] = arr[parentIndex];
        arr[parentIndex] = temp;

        current_Index = parentIndex;
        heapify_Up_Max(heap_Ptr, current_Index);
    } 

    return heap_Ptr;
}

Heap *heapify_Up_Min(Heap *heap_Ptr, int current_Index) {
    int *arr = heap_Ptr->root;

    if(current_Index == 0) {
        return heap_Ptr;
    }

    int parentIndex = (current_Index - 1) / 2;

    if(arr[current_Index] < arr[parentIndex]) {
        int temp = arr[current_Index];
        arr[current_Index] = arr[parentIndex];
        arr[parentIndex] = temp;

        current_Index = parentIndex;

        heapify_Up_Min(heap_Ptr, current_Index);
    } 

    return heap_Ptr;
}

Heap *insert_Node_Max(Heap *heap_Ptr, int data) {
    if(heap_Ptr->length == heap_Ptr->max_Length) {
        printf("Heap full\n");
        return heap_Ptr;
    }

    heap_Ptr->root[heap_Ptr->length] = data;
    heap_Ptr->length++;

    heap_Ptr = heapify_Up_Max(heap_Ptr, heap_Ptr->length - 1);

    return heap_Ptr;
}

Heap *insert_Node_Min(Heap *heap_Ptr, int data) {
    if(heap_Ptr->length == heap_Ptr->max_Length) {
        printf("Heap full\n");
        return heap_Ptr;
    }

    heap_Ptr->root[heap_Ptr->length] = data;
    heap_Ptr->length++;

    heap_Ptr = heapify_Up_Min(heap_Ptr, heap_Ptr->length - 1);

    return heap_Ptr;
}

void heapify_Down_Max(Heap *heap_Ptr, int root_Index) {
    int *arr = heap_Ptr->root;
    int current_Index = root_Index;
    int left_Child_Index = (2 * current_Index) + 1;
    int right_Child_Index = (2 * current_Index) + 2;
    int temp;

    if(left_Child_Index <= heap_Ptr->length - 1 && arr[left_Child_Index] > arr[current_Index]) {
        temp = arr[left_Child_Index];
        arr[left_Child_Index] = arr[current_Index];
        arr[current_Index] = temp;

        current_Index = left_Child_Index;
        left_Child_Index = (2 * current_Index) + 1;
        right_Child_Index = (2 * current_Index) + 2;

        heapify_Down_Max(heap_Ptr, root_Index);
    } 

    if(right_Child_Index <= heap_Ptr->length - 1 && arr[right_Child_Index] > arr[current_Index]) {
        temp = arr[right_Child_Index];
        arr[right_Child_Index] = arr[current_Index];
        arr[current_Index] = temp; 

        current_Index = right_Child_Index;
        left_Child_Index = (2 * current_Index) + 1;
        right_Child_Index = (2 * current_Index) + 2;

        heapify_Down_Max(heap_Ptr, root_Index);
    }

    return; 
}

void heapify_Down_Min(Heap *heap_Ptr, int root_Index) {
    int *arr = heap_Ptr->root;
    int left_Child_Index = (2 * root_Index) + 1;
    int right_Child_Index = (2 * root_Index) + 2;
    int temp;

    if(left_Child_Index <= heap_Ptr->length - 1 && arr[left_Child_Index] < arr[root_Index]) { 
        temp = arr[left_Child_Index];
        arr[left_Child_Index] = arr[root_Index];
        arr[root_Index] = temp;

        root_Index = left_Child_Index;
        left_Child_Index = (2 * root_Index) + 1;
        right_Child_Index = (2 * root_Index) + 2;

        heapify_Down_Min(heap_Ptr, root_Index);
    } 

    if(right_Child_Index <= heap_Ptr->length - 1 && arr[right_Child_Index] < arr[root_Index]) {
        temp = arr[right_Child_Index];
        arr[right_Child_Index] = arr[root_Index];
        arr[root_Index] = temp; 

        root_Index = right_Child_Index;
        left_Child_Index = (2 * root_Index) + 1;
        right_Child_Index = (2 * root_Index) + 2;

        heapify_Down_Min(heap_Ptr, root_Index);
    }

    return;
}

Heap *delete_Root_Node_Max(Heap *heap_Ptr) {
    if(heap_Ptr->length == 0) {
        printf("Heap empty\n");
        return heap_Ptr;
    }

    if(heap_Ptr->length == 1) {
        heap_Ptr->length--;
        return heap_Ptr;
    }

    int *arr = heap_Ptr->root;

    for(int i = 0; i <= heap_Ptr->length - 2; i++) {
        arr[i] = arr[i + 1];
    }

    heap_Ptr->length--;

    for(int i = 0; i <= (heap_Ptr->length / 2) - 1; i++) {
        heapify_Down_Max(heap_Ptr, i);
    }

    return heap_Ptr;
}

Heap *delete_Root_Node_Min(Heap *heap_Ptr) {
    if(heap_Ptr->length == 0) {
        printf("Heap empty\n");
        return heap_Ptr;
    }

    if(heap_Ptr->length == 1) {
        heap_Ptr->length--;
        return heap_Ptr;
    }

    int *arr = heap_Ptr->root;

    for(int i = 0; i <= heap_Ptr->length - 2; i++) {
        arr[i] = arr[i + 1];
    }

    heap_Ptr->length--;

    for(int i = 0; i <= (heap_Ptr->length / 2) - 1; i++) {
        heapify_Down_Min(heap_Ptr, i);
    }

    return heap_Ptr;
}

