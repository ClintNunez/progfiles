#include <stdio.h>
#include <stdbool.h>

#include "custom_queue_header.h"

int main() {
    Circular_Array_Queue *circularArrayQueue = new_Circular_Array_Queue(5);
    
    printf("Initialize:\n");
    enqueue_Circular_Array_Queue(circularArrayQueue, 1);
    enqueue_Circular_Array_Queue(circularArrayQueue, 2);
    enqueue_Circular_Array_Queue(circularArrayQueue, 3);
    enqueue_Circular_Array_Queue(circularArrayQueue, 4);
    enqueue_Circular_Array_Queue(circularArrayQueue, 5);
    
    print_Circular_Array_Queue(circularArrayQueue);

    int head = peek_Circular_Array_Queue(circularArrayQueue), tail = rear_Circular_Array_Queue(circularArrayQueue);

    int removedHead = dequeue_Circular_Array_Queue(circularArrayQueue);

    printf("head: %i, tail: %i, removedHead: %i\n", head, tail, removedHead);

    print_Circular_Array_Queue(circularArrayQueue);

    printf("Test if rear pointer connects to the first index:\n");
    enqueue_Circular_Array_Queue(circularArrayQueue, 6);
    tail = rear_Circular_Array_Queue(circularArrayQueue);

    printf("new tail: %i\n", tail);

    print_Circular_Array_Queue(circularArrayQueue);

    printf("Remove 4 elements to check if headPointer connects to the first index(head and tail should have the same value):\n");
    for(int i = 0; i < 4; i++) {
        printf("removed head %i\n", dequeue_Circular_Array_Queue(circularArrayQueue));
    }

    print_Circular_Array_Queue(circularArrayQueue);

    head = peek_Circular_Array_Queue(circularArrayQueue); 
    tail = rear_Circular_Array_Queue(circularArrayQueue);

    printf("head: %i, tail: %i\n", head, tail);

    printf("Check if pointers still works after looping\n");
    enqueue_Circular_Array_Queue(circularArrayQueue, 7);

    print_Circular_Array_Queue(circularArrayQueue);

    head = peek_Circular_Array_Queue(circularArrayQueue); 
    tail = rear_Circular_Array_Queue(circularArrayQueue);
    printf("head: %i, tail: %i\n", head, tail);
    return 0;
}

