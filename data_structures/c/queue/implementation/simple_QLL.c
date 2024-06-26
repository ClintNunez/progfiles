#include <stdio.h>
#include <stdbool.h>

#include "custom_linked_list_queue_header.h"

int main(int argc, char **argv) {
    QueueLL *queuell = new_QLL();

    if(is_QLL_Empty(queuell)) {
        printf("Queue empty\n");
    } else {
        printf("Queue is not empty\n");
    }

    enqueue_QLL(queuell, 1);
    enqueue_QLL(queuell, 2);
    enqueue_QLL(queuell, 3);
    enqueue_QLL(queuell, 4);
    enqueue_QLL(queuell, 5);
    print_QLL(queuell);

    int head = head_QLL(queuell), rear = rear_QLL(queuell);
    printf("head: %i, rear: %i\n", head, rear);

    int dequeuedElement = dequeue_QLL(queuell);
    printf("dequeuedElement: %i\n", dequeuedElement);
    print_QLL(queuell);

    head = head_QLL(queuell);
    printf("new head: %i\n", head);
    return 0;
}
