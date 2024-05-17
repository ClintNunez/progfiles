#include <stdio.h>
#include <stdbool.h>

#include "custom_linked_list_queue_header.h"

int main(int argc, char **argv) {
    QueueLL *queuell = new_QLL();

    enqueue_QLL(queuell, 1);
    enqueue_QLL(queuell, 2);
    print_QLL(queuell);

    int head = head_QLL(queuell), rear = rear_QLL(queuell);
    printf("head: %i, rear: %i\n", head, rear);

    dequeue_QLL(queuell);
    print_QLL(queuell);

    return 0;
}
