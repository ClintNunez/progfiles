#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_linked_list_queue_header.h"

int dequeuedNodeData;

struct node *newNode;
struct node *oldNode;
struct node *currentNode;

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
        dequeuedNodeData = queuell->tailNode->data;
        oldNode = queuell->tailNode;
        queuell->tailNode = oldNode->prev;
        queuell->tailNode->next = NULL;

        free(oldNode);
        queuell->length--;
        
        return dequeuedNodeData;
    } else {
        printf("\tQueue is empty\n");
    }

    return -1;
}
