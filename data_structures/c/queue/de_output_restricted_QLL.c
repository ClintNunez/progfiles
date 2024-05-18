#include <stdio.h>
#include <stdbool.h>

#include "custom_linked_list_queue_header.h"

int main() {
    QueueLL *queueLL = new_QLL();
    
    enqueue_QLL_DE_OR(queueLL, 1, true);
    enqueue_QLL_DE_OR(queueLL, 2, false);
    enqueue_QLL_DE_OR(queueLL, 3, false);
    enqueue_QLL_DE_OR(queueLL, 4, false);
    enqueue_QLL_DE_OR(queueLL, 5, true);

    print_QLL(queueLL);

    int removedHead = dequeue_QLL_DE_OR(queueLL);

    printf("removedHead: %i\n", removedHead);
    print_QLL(queueLL);

    int head = head_QLL(queueLL), tail = rear_QLL(queueLL);

    printf("head: %i, tail: %i\n", head, tail);

    print_QLL(queueLL);

    return 0;
}

