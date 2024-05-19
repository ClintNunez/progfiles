#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_queue_header.h"

int dequeuedNodeData;

struct node *newNode;
struct node *oldNode;
struct node *currentNode;

struct PriorityNode *newNodePriority;
struct PriorityNode *oldNodePriority;
struct PriorityNode *currentNodePriority;

QueueLL *new_QLL() {
    QueueLL *newQLL = malloc(sizeof(QueueLL));
    newQLL->length = 0;

    return newQLL;
}

int head_QLL(QueueLL *queuell) {
    return queuell->headNode->data;
}

int rear_QLL(QueueLL *queuell) {
    return queuell->tailNode->data;
}

bool is_QLL_Empty(QueueLL *queuell) {
    return (queuell->length == 0) ? true : false;
}

void print_QLL(QueueLL *queuell) {
    if(queuell->length > 0) {
        printf("\t");
        currentNode = queuell->headNode;
        for(int i = 0 ; i < queuell->length; i++) {
            printf("%i ", currentNode->data);
            currentNode = currentNode->next;
        }
        printf("\n");
    } else {
        printf("\tQueue is empty\n");
    }

}

void enqueue_QLL(QueueLL *queuell, int data) {
    newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if(queuell->length == 0) {
        newNode->prev = NULL;
        queuell->headNode = queuell->tailNode = newNode;
    } else {
        queuell->tailNode->next = newNode;
        newNode->prev = queuell->tailNode;
        queuell->tailNode = newNode;
    }

    queuell->length++;
}

int dequeue_QLL(QueueLL *queuell) {
    if(queuell->length > 0) {
        dequeuedNodeData = queuell->headNode->data;
        oldNode = queuell->headNode;
        queuell->headNode = oldNode->next;
        queuell->headNode->prev = NULL;

        free(oldNode);
        queuell->length--;
        
        return dequeuedNodeData;
    } else {
        printf("\tQueue is empty\n");
    }

    return -1;
}

void enqueue_QLL_DE_IR(QueueLL *queuell, int data) {
    newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if(queuell->length == 0) {
        newNode->prev = NULL;
        queuell->headNode = queuell->tailNode = newNode;
    } else {
        queuell->tailNode->next = newNode;
        newNode->prev = queuell->tailNode;
        queuell->tailNode = newNode;
    }

    queuell->length++;
}

int dequeue_QLL_DE_IR(QueueLL *queuell, bool atHead) {
    if(queuell->length > 0) {
        if(atHead) {
            dequeuedNodeData = queuell->headNode->data;
            oldNode = queuell->headNode;
            queuell->headNode = oldNode->next;
            queuell->headNode->prev = NULL;
        } else {
            dequeuedNodeData = queuell->tailNode->data;
            oldNode = queuell->tailNode;
            queuell->tailNode = oldNode->prev;
            queuell->tailNode->next = NULL;
        }

        free(oldNode);
        queuell->length--;
        return dequeuedNodeData;
    } else {
        printf("\tQueue is empty\n");
    }

    return - 1;
}

void enqueue_QLL_DE_OR(QueueLL *queuell, int data, bool atHead) {
    newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if(queuell->length == 0) {
        newNode->prev = NULL;
        queuell->headNode = queuell->tailNode = newNode;
    } else {
        if(atHead) {
            queuell->headNode->prev = newNode;
            newNode->next = queuell->headNode;
            queuell->headNode = newNode;
        } else {
            queuell->tailNode->next = newNode;
            newNode->prev = queuell->tailNode;
            queuell->tailNode = newNode;
        }
   }

    queuell->length++;
}

int dequeue_QLL_DE_OR(QueueLL *queuell) {
    if(queuell->length > 0) {
        dequeuedNodeData = queuell->headNode->data;
        oldNode = queuell->headNode;
        queuell->headNode = oldNode->next;
        queuell->headNode->prev = NULL;

        free(oldNode);
        queuell->length--;
        return dequeuedNodeData;
    } else {
        printf("\tQueue is empty\n");
    }

    return - 1;
}

void enqueue_QLL_Circular(QueueLL *queuell, int data) {
    newNode = malloc(sizeof(struct node));
    newNode->data = data;

    if(queuell->length == 0) {
        newNode->prev = newNode;
        newNode->next = newNode;
        queuell->headNode = queuell->tailNode = newNode;
    } else {
        newNode->prev = queuell->tailNode;
        newNode->next = queuell->tailNode->next;
        queuell->tailNode->next = newNode;
        queuell->tailNode = newNode;
   }

    queuell->length++;
}

int dequeue_QLL_Circular(QueueLL *queuell) {
    if(queuell->length > 0) {
        dequeuedNodeData = queuell->headNode->data;
        oldNode = queuell->headNode;
        queuell->headNode = oldNode->next;
        queuell->headNode->prev = oldNode->prev;
        queuell->tailNode->next = queuell->headNode;

        free(oldNode);
        queuell->length--;

        return dequeuedNodeData;
    } else {
        printf("\tQueue is empty\n");
    }

    return - 1;
}

Priority_QueueLL *new_Priority_QLL() {
    Priority_QueueLL *newQLL = malloc(sizeof(Priority_QueueLL));
    newQLL->length = 0;

    return newQLL;
}

int head_Priority_QLL(Priority_QueueLL *priorityQueueLL) {
    return priorityQueueLL->headNode->data;
}

int rear_Priority_QLL(Priority_QueueLL *priorityQueueLL) {
    return priorityQueueLL->tailNode->data;
}

bool is_Priority_QLL_Empty(Priority_QueueLL *priorityQueueLL) {
    return (priorityQueueLL->length == 0) ? true : false;
}

void print_Priority_QLL(Priority_QueueLL *priorityQueueLL) {
    if(priorityQueueLL->length > 0) {
        printf("\t");
        currentNodePriority = priorityQueueLL->headNode;
        for(int i = 0 ; i < priorityQueueLL->length; i++) {
            printf("(%i, %i) ", currentNodePriority->data, currentNodePriority->priority);
            currentNodePriority = currentNodePriority->next;
        }
        printf("\n");
    } else {
        printf("\tQueue is empty\n");
    }

}

void enqueue_Priority_Ascending_QLL(Priority_QueueLL *priorityQueueLL, int data, int priorityLevel) {
    newNodePriority = malloc(sizeof(struct PriorityNode));
    newNodePriority->data = data;
    newNodePriority->priority = priorityLevel;

    if(priorityQueueLL->length == 0) {
        newNodePriority->prev = NULL;
        newNodePriority->next = NULL;

        priorityQueueLL->headNode = priorityQueueLL->tailNode = newNodePriority;
    } else {
        currentNodePriority = priorityQueueLL->tailNode;

        if(currentNodePriority->priority < priorityLevel) {
            newNodePriority->next = NULL;
            newNodePriority->prev = currentNodePriority;
            currentNodePriority->next = newNodePriority;
            priorityQueueLL->tailNode = newNodePriority;
        } else {
            while(currentNodePriority->priority > priorityLevel) {
                if(currentNodePriority->prev != NULL) {
                    currentNodePriority = currentNodePriority->prev;
                } else {
                    break;
                }             
            }

            if(currentNodePriority == priorityQueueLL->headNode) {
                priorityQueueLL->headNode = newNodePriority;
                newNodePriority->prev = NULL;
                newNodePriority->next = currentNodePriority;
                currentNodePriority->prev = newNodePriority;
            } else {
                newNodePriority->prev = currentNodePriority;
                newNodePriority->next = currentNodePriority->next;
                currentNodePriority->next = newNodePriority;
            }

        }

    }

    priorityQueueLL->length++;
}

void enqueue_Priority_Descending_QLL(Priority_QueueLL *priorityQueueLL, int data, int priorityLevel) {
    newNodePriority = malloc(sizeof(struct PriorityNode));
    newNodePriority->data = data;
    newNodePriority->priority = priorityLevel;

    if(priorityQueueLL->length == 0) {
        newNodePriority->prev = NULL;
        newNodePriority->next = NULL;

        priorityQueueLL->headNode = priorityQueueLL->tailNode = newNodePriority;
    } else {
        currentNodePriority = priorityQueueLL->tailNode;

        if(currentNodePriority->priority > priorityLevel) {
            newNodePriority->next = NULL;
            newNodePriority->prev = currentNodePriority;
            currentNodePriority->next = newNodePriority;
            priorityQueueLL->tailNode = newNodePriority;
        } else {
            while(currentNodePriority->priority < priorityLevel) {
                if(currentNodePriority->prev != NULL) {
                    currentNodePriority = currentNodePriority->prev;
                } else {
                    break;
                }             
            }

            if(currentNodePriority == priorityQueueLL->headNode) {
                priorityQueueLL->headNode = newNodePriority;
                newNodePriority->prev = NULL;
                newNodePriority->next = currentNodePriority;
                currentNodePriority->prev = newNodePriority;
            } else {
                newNodePriority->prev = currentNodePriority;
                newNodePriority->next = currentNodePriority->next;
                currentNodePriority->next = newNodePriority;
            }

        }

    }

    priorityQueueLL->length++;
}

int dequeue_Priority_QLL(Priority_QueueLL *priorityQueueLL) {
    if(priorityQueueLL->length > 0) {
        dequeuedNodeData = priorityQueueLL->headNode->data;
        oldNodePriority = priorityQueueLL->headNode;
        priorityQueueLL->headNode = oldNodePriority->next;
        priorityQueueLL->headNode->prev = NULL;

        free(oldNode);
        priorityQueueLL->length--;
        
        return dequeuedNodeData;
    } else {
        printf("\tQueue is empty\n");
    }

    return -1;
}
