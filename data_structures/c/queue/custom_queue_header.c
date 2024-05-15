#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_queue_header.h"

int *currentP;
    
Array_Queue* new_Array_Queue(int length) {
    Array_Queue *arrayQueue = malloc(sizeof(Array_Queue));
    int *array = (int*) malloc(sizeof(int) * length);

    arrayQueue->headPointer = array;
    arrayQueue->tailPointer = array;
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
    return *arrayQueue->headPointer;    
}

int rear_Array_Queue(Array_Queue *arrayQueue) {
    return *arrayQueue->tailPointer;    
}

void print_Array_Queue(Array_Queue *arrayQueue) {
    int *currentP = arrayQueue->headPointer;
    
    printf("\t");
    for(int i = 0; i < arrayQueue->length; i++) {
        printf("%i ", *currentP);
        currentP++;
    }

    printf("\n");
}

void enqueue_Array_Simple_Queue(Array_Queue *arrayQueue, int data) {
    if(arrayQueue->length == 0) {
        *arrayQueue->headPointer = *arrayQueue->tailPointer = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength)  {
        arrayQueue->tailPointer++;
        *arrayQueue->tailPointer = data;
        arrayQueue->length++;
    } else {
        printf("\tQueue already full\n");
    }
}

int dequeue_Array_Simple_Queue(Array_Queue *arrayQueue) {
    int headPointer;
    if(arrayQueue->length - 1 >= 0)  {
        headPointer = *arrayQueue->headPointer;
        currentP = arrayQueue->headPointer;

        do {
            *currentP = *(currentP + 1);
            currentP++;
        } while(currentP != arrayQueue->tailPointer);

        arrayQueue->tailPointer--;
        arrayQueue->length--;

        return headPointer;
    } else {
        printf("\tQueue already empty\n");
    }

    return -1;
}

// enqueue in input restricted and simple queue are the same
void enqueue_Array_DE_IR_Queue(Array_Queue *arrayQueue, int data) {
    if(arrayQueue->length == 0) {
        *arrayQueue->headPointer = *arrayQueue->tailPointer = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength)  {
        arrayQueue->tailPointer++;
        *arrayQueue->tailPointer = data;
        arrayQueue->length++;
    } else {
        printf("\tQueue already full\n");
    }
}

int dequeue_Array_DE_IR_Queue(Array_Queue *arrayQueue, bool atHead) {
    int dequeuedElement;
    if(arrayQueue->length != 0) {
        if(atHead) {
            dequeuedElement = *arrayQueue->headPointer;
            currentP = arrayQueue->headPointer;

            do {
                *currentP = *(currentP + 1);
                currentP++;
            } while(currentP != arrayQueue->tailPointer);

        } else {
            dequeuedElement = *arrayQueue->tailPointer;
        }

        arrayQueue->tailPointer--;
        arrayQueue->length--;

        return dequeuedElement;
    } else {
        printf("\tQueue already empty\n");
    }

    return -1;
}

void enqueue_Array_DE_OR_Queue(Array_Queue *arrayQueue, int data, bool atHead) {
    if(arrayQueue->length == 0) {
        *arrayQueue->headPointer = *arrayQueue->tailPointer = data;
        arrayQueue->length++;
    } else if(arrayQueue->length + 1 <= arrayQueue->maxLength) {
        if(atHead) {
            currentP = arrayQueue->tailPointer;
            int rearElement = *arrayQueue->tailPointer;

            // shift elements of queue to the right
            for(int i = arrayQueue->length - 1; i > 0; i--) {
                *currentP = *(currentP - 1);
                currentP--;
            }

            *currentP = data;

            arrayQueue->tailPointer++;
            *arrayQueue->tailPointer = rearElement;
        } else {
            arrayQueue->tailPointer++;
            *arrayQueue->tailPointer = data;
        }
        arrayQueue->length++;
    } else {
        printf("\tQueue already full\n");
    }
}

// enqueue in input restricted and simple queue are the same
int dequeue_Array_DE_OR_Queue(Array_Queue *arrayQueue) {
    int headPointer;

    if(arrayQueue->length - 1 >= 0)  {
        headPointer = *arrayQueue->headPointer;
        currentP = arrayQueue->headPointer;

        do {
            *currentP = *(currentP + 1);
            currentP++;
        } while(currentP != arrayQueue->tailPointer);

        arrayQueue->tailPointer--;
        arrayQueue->length--;

        return headPointer;
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

Priority_Array_Queue *new_Priority_Array_Queue(int length) {
    Priority_Array_Queue *newPriorityArrayQueue = malloc(sizeof(Priority_Array_Queue));
    PriorityElement *priorityElement = malloc(sizeof * priorityElement * length);

    newPriorityArrayQueue->headPointer = priorityElement;
    newPriorityArrayQueue->tailPointer = priorityElement;
    newPriorityArrayQueue->length = 0;
    newPriorityArrayQueue->maxLength = length;

    return newPriorityArrayQueue;
}

bool is_Priority_Array_Queue_Empty(Priority_Array_Queue *priorityArrayQueue) {
    return (priorityArrayQueue->length == 0) ? true : false;
}

bool is_Priority_Array_Queue_Full(Priority_Array_Queue *priorityArrayQueue) {
    return (priorityArrayQueue->length == priorityArrayQueue->maxLength) ? true : false;
}

int peek_Priority_Array_Queue(Priority_Array_Queue *priorityArrayQueue) {
    return priorityArrayQueue->headPointer->data;    
}

int rear_Priority_Array_Queue(Priority_Array_Queue *priorityArrayQueue) {
    return priorityArrayQueue->tailPointer->data;    
}

void print_Priority_Array_Queue(Priority_Array_Queue *priorityArrayQueue) {
    PriorityElement *currentP = priorityArrayQueue->headPointer;
    
    printf("\t");
    for(int i = 0; i < priorityArrayQueue->length; i++) {
        printf("%i ", currentP->data);
        currentP++;
    }
    printf("\n");
}

void enqueue_Priority_Ascending_Array_Queue(Priority_Array_Queue *priorityArrayQueue, int data, int priorityLvl) {
    if(priorityArrayQueue->length == 0) {
        priorityArrayQueue->headPointer->data = data;
        priorityArrayQueue->headPointer->priorityLvl = priorityLvl;
        priorityArrayQueue->length++;
    } else if(priorityArrayQueue->length + 1 <= priorityArrayQueue->maxLength) {
        PriorityElement *currentElement = priorityArrayQueue->tailPointer + 1; 

        for(int i = priorityArrayQueue->length; i >= 0; i--) {
            if((currentElement - 1)->priorityLvl <= priorityLvl || currentElement == priorityArrayQueue->headPointer) { 
                currentElement->data = data;
                currentElement->priorityLvl = priorityLvl;
                break;
            } else {
                currentElement->data = (currentElement - 1)->data;
                currentElement->priorityLvl = (currentElement - 1)->priorityLvl;
                currentElement--;
            }
        }

        priorityArrayQueue->length++;
        priorityArrayQueue->tailPointer++;
    } else {
        printf("\tQueue is full\n");
    }
}

PriorityElement *dequeue_Priority_Ascending_Array_Queue(Priority_Array_Queue *priorityArrayQueue) {
    PriorityElement *headPointer;
    PriorityElement *currentPointer;
    if(priorityArrayQueue->length - 1 >= 0)  {
        headPointer = priorityArrayQueue->headPointer;
        currentPointer = priorityArrayQueue->headPointer;

        do {
            currentPointer->data = (currentPointer + 1)->data;
            currentPointer->priorityLvl = (currentPointer + 1)->priorityLvl;
            currentPointer++;
        } while(currentPointer != priorityArrayQueue->tailPointer);

        priorityArrayQueue->tailPointer--;
        priorityArrayQueue->length--;
    } else {
        printf("\tQueue already empty\n");
        headPointer->data = -1;
        headPointer->priorityLvl = -1;
    }

    return headPointer;
}
