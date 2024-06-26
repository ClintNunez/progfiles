#include <stdio.h>
#include <stdbool.h>

#include "custom_queue_header.h"

int main() {
    Array_Queue *arrQueue = new_Array_Queue(10);
    
    enqueue_Array_DE_IR_Queue(arrQueue, 1);
    enqueue_Array_DE_IR_Queue(arrQueue, 2);
    enqueue_Array_DE_IR_Queue(arrQueue, 3);
    enqueue_Array_DE_IR_Queue(arrQueue, 4);
    enqueue_Array_DE_IR_Queue(arrQueue, 5);

    int head = peek_Array_Queue(arrQueue), tail = rear_Array_Queue(arrQueue);

    int removedHead = dequeue_Array_DE_IR_Queue(arrQueue, true);
    int removedTail = dequeue_Array_DE_IR_Queue(arrQueue, false);

    printf("head: %i, tail: %i, removedHead: %i, removedTail: %i\n", head, tail, removedHead, removedTail);

    print_Array_Queue(arrQueue);

    tail = rear_Array_Queue(arrQueue);
    printf("new tail: %i\n", tail);

    return 0;
}
