#include <stdio.h>
#include <stdlib.h>

#include "custom_heap_header.h"

Heap *new_Heap(int length) {
    Heap *newHeap = malloc(sizeof(Heap));
    int *arr = malloc(sizeof(int) * length);
    newHeap->root = arr;
    newHeap->max_Length = length;
    newHeap->length = 0;
    return newHeap;
}

Heap *heapify_Up_Max(Heap *heap_Ptr) {
    int *arr = heap_Ptr->root;
    int currentIndex = heap_Ptr->length-1;
    int parentIndex = (currentIndex - 1) / 2;

    while(currentIndex != 0) {
        if(arr[currentIndex] > arr[parentIndex]) {
            int temp = arr[currentIndex];
            arr[currentIndex] = arr[parentIndex];
            arr[parentIndex] = temp;
            
            currentIndex = parentIndex;
            parentIndex = (currentIndex - 1) / 2;
        } else {
            break;
        }
    }

    return heap_Ptr;
}

Heap *heapify_Up_Min(Heap *heap_Ptr) {
    int *arr = heap_Ptr->root;
    int currentIndex = heap_Ptr->length-1;
    int parentIndex = (currentIndex - 1) / 2;

    while(currentIndex != 0) {
        if(arr[currentIndex] < arr[parentIndex]) {
            int temp = arr[currentIndex];
            arr[currentIndex] = arr[parentIndex];
            arr[parentIndex] = temp;
            
            currentIndex = parentIndex;
            parentIndex = (currentIndex - 1) / 2;
        } else {
            break;
        }
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

    heap_Ptr = heapify_Up_Max(heap_Ptr);

    return heap_Ptr;
}

Heap *insert_Node_Min(Heap *heap_Ptr, int data) {
    if(heap_Ptr->length == heap_Ptr->max_Length) {
        printf("Heap full\n");
        return heap_Ptr;
    }

    heap_Ptr->root[heap_Ptr->length] = data;
    heap_Ptr->length++;

    heap_Ptr = heapify_Up_Min(heap_Ptr);

    return heap_Ptr;
}

/*

Heap *heapify_Down_Max(Heap *heap_Ptr) {

}

Heap *heapify_Down_Min(Heap *heap_Ptr) {
    
}
*/

void print_Heap(Heap *heap_Ptr) {
    int *arr = heap_Ptr->root;
    for(int i = 0; i < heap_Ptr->length; i++) {
        printf("%i ", arr[i]);
    }
}
