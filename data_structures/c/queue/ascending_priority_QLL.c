#include <stdio.h>
#include <stdbool.h>

#include "custom_linked_list_queue_header.h"

int main() {
    Priority_QueueLL *priorityQLL = new_Priority_QLL();
    
    enqueue_Priority_Ascending_QLL(priorityQLL, 3, 3);
    print_Priority_QLL(priorityQLL);
    enqueue_Priority_Ascending_QLL(priorityQLL, 2, 2);
    print_Priority_QLL(priorityQLL);
    enqueue_Priority_Ascending_QLL(priorityQLL, 1, 1);
    print_Priority_QLL(priorityQLL);
    enqueue_Priority_Ascending_QLL(priorityQLL, 4, 2);
    print_Priority_QLL(priorityQLL);
    enqueue_Priority_Ascending_QLL(priorityQLL, 6, 5);
    print_Priority_QLL(priorityQLL);


    int head = head_Priority_QLL(priorityQLL), tail = rear_Priority_QLL(priorityQLL);

    int removedHead = dequeue_Priority_QLL(priorityQLL);

    printf("head: %i, tail: %i, removedHead: %i\n", head, tail, removedHead);
    
    print_Priority_QLL(priorityQLL);

    head = head_Priority_QLL(priorityQLL), tail = rear_Priority_QLL(priorityQLL);
    printf("head: %i, tail: %i\n", head, tail);

    return 0;
}
