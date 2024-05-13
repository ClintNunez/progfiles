#include <stdio.h>
#include <stdbool.h>

#include "custom_queue_header.h"

int main() {
    Array_Queue *arrQueue = new_Array_Queue(10);
    
    enqueue_Array_DE_OR_Queue(arrQueue, 1, true);
    enqueue_Array_DE_OR_Queue(arrQueue, 2, false);
    enqueue_Array_DE_OR_Queue(arrQueue, 3, true);
    enqueue_Array_DE_OR_Queue(arrQueue, 4, false);
    enqueue_Array_DE_OR_Queue(arrQueue, 5, true);

    print_Array_Queue(arrQueue);

    int head = peek_Array_Queue(arrQueue), tail = rear_Array_Queue(arrQueue);

    int removedHead = dequeue_Array_DE_OR_Queue(arrQueue);

    printf("head: %i, tail: %i, removedHead: %i\n", head, tail, removedHead);

    print_Array_Queue(arrQueue);

    enqueue_Array_DE_OR_Queue(arrQueue, 7, false);
    tail = rear_Array_Queue(arrQueue);
    printf("new tail: %i\n", tail);

    print_Array_Queue(arrQueue);
    return 0;
}

