#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_queue_header.h"

int *currentP;
    
Array_Queue* new_Array_Queue(int length) {
    Array_Queue *arrayQueue = malloc(sizeof(Array_Queue));
    int *array = (int*) malloc(sizeof(int) * length);

    arrayQueue->head = array;
    arrayQueue->tail = array;
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
    return *arrayQueue->tail;    
}

void print_Array_Queue(Array_Queue *arrayQueue) {
    int *currentP = arrayQueue->head;
    
    printf("\t");
    for(int i = 0; i < arrayQueue->length; i++) {
        printf("%i ", *currentP);
        currentP++;
    }

    printf("\n");
}

void enqueue_Array_Simple_Queue(Array_Queue *arrayQueue, int data) {
    if(arrayQueue->length == 0) {
        *arrayQueue->head = *arrayQueue->tail = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength)  {
        arrayQueue->tail++;
        *arrayQueue->tail = data;
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
        } while(currentP != arrayQueue->tail);

        arrayQueue->tail--;
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
        *arrayQueue->head = *arrayQueue->tail = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength)  {
        arrayQueue->tail++;
        *arrayQueue->tail = data;
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
            } while(currentP != arrayQueue->tail);

        } else {
            dequeuedElement = *arrayQueue->tail;
        }

        arrayQueue->tail--;
        arrayQueue->length--;

        return dequeuedElement;
    } else {
        printf("\tQueue already empty\n");
    }

    return -1;
}

void enqueue_Array_DE_OR_Queue(Array_Queue *arrayQueue, int data, bool atHead) {
    if(arrayQueue->length == 0) {
        *arrayQueue->head = *arrayQueue->tail = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength) {
        if(atHead) {
            currentP = arrayQueue->tail;
            int rearElement = *arrayQueue->tail;

            // shift elements of queue to the right
            for(int i = arrayQueue->length - 1; i > 0; i--) {
                *currentP = *(currentP - 1);
                currentP--;
            }

            *currentP = data;

            arrayQueue->tail++;
            *arrayQueue->tail = rearElement;
        } else {
            arrayQueue->tail++;
            *arrayQueue->tail = data;
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
        } while(currentP != arrayQueue->tail);

        arrayQueue->tail--;
        arrayQueue->length--;

        return head;
    } else {
        printf("\tQueue already empty\n");
    }

    return -1;
}

Circular_Array_Queue* new_Circular_Array_Queue(int length) {
    Circular_Array_Queue *circularArrayQueue = malloc(sizeof(Circular_Array_Queue));
    int *array = (int*) malloc(sizeof(int) * length);

    circularArrayQueue->headPointer = array;
    circularArrayQueue->tailPointer = array;
    circularArrayQueue->firstIndex = array;
    circularArrayQueue->lastIndex = &array[length - 1];
    circularArrayQueue->length = 0;
    circularArrayQueue->maxLength = length;
    
    return circularArrayQueue;
}

bool is_Circular_Array_Queue_Empty(Circular_Array_Queue *circularArrayQueue) {
    return (circularArrayQueue->length == 0) ? true : false;
}

bool is_Circular_Array_Queue_Full(Circular_Array_Queue *circularArrayQueue) {
    return (circularArrayQueue->length == circularArrayQueue->maxLength) ? true : false;
}

int peek_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue) {
    return *circularArrayQueue->headPointer;    
}

int rear_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue) {
    return *circularArrayQueue->tailPointer;    
}

void print_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue) {
    int *currentP = circularArrayQueue->headPointer;    
    
    printf("\tElements: ");
    for(int i = 0; i < circularArrayQueue->length; i++) {
        printf("%i ", *currentP);

        if(currentP == circularArrayQueue->lastIndex) {
            currentP = circularArrayQueue->firstIndex;
        } else {
            currentP++;
        }
    }

    printf("\n");
}

void enqueue_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue, int data) {
    if(circularArrayQueue->length == 0) {
        *circularArrayQueue->headPointer = *circularArrayQueue->tailPointer = data;
        circularArrayQueue->length++;
    } else if(circularArrayQueue->length + 1 <= circularArrayQueue->maxLength) {
        if(circularArrayQueue->tailPointer == circularArrayQueue->lastIndex) {
            circularArrayQueue->tailPointer = circularArrayQueue->firstIndex;
        } else {
            circularArrayQueue->tailPointer++;
        }
        *circularArrayQueue->tailPointer = data;
        circularArrayQueue->length++;
    } else {
        printf("\tQueue is full\n");
    }
}

int dequeue_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue) {
    if(circularArrayQueue->length - 1 >= 0) {
        int dequeuedElement = *circularArrayQueue->headPointer;

        if(circularArrayQueue->headPointer == circularArrayQueue->lastIndex) {
            circularArrayQueue->headPointer = circularArrayQueue->firstIndex;
        } else {
            circularArrayQueue->headPointer++;
        }
       
        circularArrayQueue->length--;
        return dequeuedElement;
    } else {
        printf("\tQueue is empty\n");
    }

    return -1;
}
