#include <stdio.h>
#include <stdbool.h>

#include "custom_linked_list_queue_header.h"

int main() {
    QueueLL *queueLL = new_QLL();
    
    enqueue_QLL_DE_IR(queueLL, 1);
    enqueue_QLL_DE_IR(queueLL, 2);
    enqueue_QLL_DE_IR(queueLL, 3);
    enqueue_QLL_DE_IR(queueLL, 4);
    enqueue_QLL_DE_IR(queueLL, 5);

    print_QLL(queueLL);

    int removedHead = dequeue_QLL_DE_IR(queueLL, true);
    int removedTail = dequeue_QLL_DE_IR(queueLL, false);

    printf("removedHead: %i, removedTail: %i\n", removedHead, removedTail);
    print_QLL(queueLL);

    int head = head_QLL(queueLL), tail = rear_QLL(queueLL);

    printf("head: %i, tail: %i\n", head, tail);

    print_QLL(queueLL);

    return 0;
}

