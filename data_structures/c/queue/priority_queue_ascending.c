#include <stdio.h>
#include <stdbool.h>

#include "custom_queue_header.h"

int main() {
    Priority_Array_Queue *priorirtyArrayQueue = new_Priority_Array_Queue(5);
    
    enqueue_Priority_Ascending_Array_Queue(priorirtyArrayQueue, 3, 3);
    print_Priority_Array_Queue(priorirtyArrayQueue);
    enqueue_Priority_Ascending_Array_Queue(priorirtyArrayQueue, 2, 2);
    print_Priority_Array_Queue(priorirtyArrayQueue);
    enqueue_Priority_Ascending_Array_Queue(priorirtyArrayQueue, 1, 1);
    print_Priority_Array_Queue(priorirtyArrayQueue);
    enqueue_Priority_Ascending_Array_Queue(priorirtyArrayQueue, 4, 2);
    print_Priority_Array_Queue(priorirtyArrayQueue);
    enqueue_Priority_Ascending_Array_Queue(priorirtyArrayQueue, 6, 5);
    print_Priority_Array_Queue(priorirtyArrayQueue);


    int head = peek_Priority_Array_Queue(priorirtyArrayQueue), tail = rear_Priority_Array_Queue(priorirtyArrayQueue);

    PriorityElement *removedHead = dequeue_Priority_Ascending_Array_Queue(priorirtyArrayQueue);

    printf("head: %i, tail: %i, removedHead: %i\n", head, tail, removedHead->data);
    
    print_Priority_Array_Queue(priorirtyArrayQueue);

    return 0;
}
