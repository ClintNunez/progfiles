#include <stdio.h>
#include <stdbool.h>

#include "custom_queue_header.h"

int main() {
    Array_Queue *arrQueue = new_Array_Queue(10);
    
    enqueue_Array_Simple_Queue(arrQueue, 1);
    enqueue_Array_Simple_Queue(arrQueue, 2);
    enqueue_Array_Simple_Queue(arrQueue, 3);

    int head = peek_Array_Simple_Queue(arrQueue), tail = rear_Array_Simple_Queue(arrQueue);

    int removedHead = dequeue_Array_Simple_Queue(arrQueue);

    printf("head: %i, tail: %i, removedHead: %i\n", head, tail, removedHead);

    print_Array_Simple_Queue(arrQueue);

    printf("new tail: %i\n", tail);

    return 0;
}
