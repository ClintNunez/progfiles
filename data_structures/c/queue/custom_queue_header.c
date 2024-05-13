#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_queue_header.h"
// TODO
// Consider if setting tails to zero before shift the pointer to the right is needed 
//  since the condition for looping can stop at the tail instead of looping through all elements of the array

int *currentP;
    
Array_Queue* new_Array_Queue(int length) {
    Array_Queue *arrayQueue = malloc(sizeof(Array_Queue));
    int *array = (int*) malloc(sizeof(int) * length);

    for(int i = 0; i < length; i++) 
        array[i] = 0;

    arrayQueue->head = array;
    arrayQueue->rear = array;
    arrayQueue->length = 0;
    arrayQueue->maxLength = length;
    
    return arrayQueue;
}

bool is_Array_Queue_Empty(Array_Queue *arrayQueue) {
    return (arrayQueue->length == 0) ? true : false;
}

bool is_Array_Queue_Full(Array_Queue *arrayQueue) {
    return (arrayQueue->length == arrayQueue->maxLength) ? true : false;
}

int peek_Array_Queue(Array_Queue *arrayQueue) {
    return *arrayQueue->head;    
}

int rear_Array_Queue(Array_Queue *arrayQueue) {
    return *arrayQueue->rear;    
}

void print_Array_Queue(Array_Queue *arrayQueue) {
    int *currentP = arrayQueue->head;    
    
    printf("\t");
    while(currentP != arrayQueue->rear + 1) {
        printf("%i ", *currentP);
        currentP++;
    }

    printf("\n");
}

void enqueue_Array_Simple_Queue(Array_Queue *arrayQueue, int data) {
    if(arrayQueue->length == 0) {
        *arrayQueue->head = *arrayQueue->rear = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength)  {
        arrayQueue->rear++;
        *arrayQueue->rear = data;
        arrayQueue->length++;
    } else {
        printf("\tQueue already full\n");
    }
}

int dequeue_Array_Simple_Queue(Array_Queue *arrayQueue) {
    int head;
    if(arrayQueue->length - 1 >= 0)  {
        head = *arrayQueue->head;
        currentP = arrayQueue->head;

        do {
            *currentP = *(currentP + 1);
            currentP++;
        } while(currentP != arrayQueue->rear);

        arrayQueue->rear--;
        arrayQueue->length--;

        return head;
    } else {
        printf("\tQueue already empty\n");
    }

    return -1;
}

// enqueue in input restricted and simple queue are the same
void enqueue_Array_DE_IR_Queue(Array_Queue *arrayQueue, int data) {
    if(arrayQueue->length == 0) {
        *arrayQueue->head = *arrayQueue->rear = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength)  {
        arrayQueue->rear++;
        *arrayQueue->rear = data;
        arrayQueue->length++;
    } else {
        printf("\tQueue already full\n");
    }
}

int dequeue_Array_DE_IR_Queue(Array_Queue *arrayQueue, bool atHead) {
    int dequeuedElement;
    if(arrayQueue->length != 0) {
        if(atHead) {
            dequeuedElement = *arrayQueue->head;
            currentP = arrayQueue->head;

            do {
                *currentP = *(currentP + 1);
                currentP++;
            } while(currentP != arrayQueue->rear);

        } else {
            dequeuedElement = *arrayQueue->rear;
        }

        arrayQueue->rear--;
        arrayQueue->length--;

        return dequeuedElement;
    } else {
        printf("\tQueue already empty\n");
    }

    return -1;
}

void enqueue_Array_DE_OR_Queue(Array_Queue *arrayQueue, int data, bool atHead) {
    if(arrayQueue->length == 0) {
        *arrayQueue->head = *arrayQueue->rear = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength) {
        if(atHead) {
            currentP = arrayQueue->rear;
            int rearElement = *arrayQueue->rear;

            // shift elements of queue to the right
            for(int i = arrayQueue->length - 1; i > 0; i--) {
                *currentP = *(currentP - 1);
                currentP--;
            }

            *currentP = data;

            arrayQueue->rear++;
            *arrayQueue->rear = rearElement;
        } else {
            arrayQueue->rear++;
            *arrayQueue->rear = data;
        }
        arrayQueue->length++;
    } else {
        printf("\tQueue already full\n");
    }
}

// enqueue in input restricted and simple queue are the same
int dequeue_Array_DE_OR_Queue(Array_Queue *arrayQueue) {
    int head;

    if(arrayQueue->length - 1 >= 0)  {
        head = *arrayQueue->head;
        currentP = arrayQueue->head;

        do {
            *currentP = *(currentP + 1);
            currentP++;
        } while(currentP != arrayQueue->rear);

        *arrayQueue->rear = 0;
        arrayQueue->rear--;
        arrayQueue->length--;

        return head;
    } else {
        printf("\tQueue already empty\n");
    }

    return -1;
}
