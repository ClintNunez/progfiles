#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_queue_header.h"
    
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

    return true;
}

bool is_Array_Queue_Full(Array_Queue *arrayQueue) {
   return true; 
}


int array_Queue_Size(Array_Queue *arrayQueue) {
    /*
    int tempP = arrayQueue->head, count = 0;
    
    while(tempP != arrayQueue->rear) {
        tempP++;
    }
    */
    
    return 0;
}


int peek_Array_Queue(Array_Queue *arrayQueue) {
    return *arrayQueue->head;    
}

int rear_Array_Queue(Array_Queue *arrayQueue) {
    return *arrayQueue->rear;    
}

void enqueue_Array_Queue(Array_Queue *arrayQueue, int data) {
    if(arrayQueue->length == 0) {
        *arrayQueue->head = *arrayQueue->rear = data;
        arrayQueue->length++;
    } else if(array_Queue_Size(arrayQueue) + 1 < arrayQueue->maxLength)  {
        arrayQueue->rear++;
        *arrayQueue->rear = data;
    } else {
        printf("\tArray at max length\n");
    }
}

// shift contents of array instead of shifting the head pointer
int dequeue_Array_Queue(Array_Queue *arrayQueue) {
    int front;
    if(arrayQueue->length - 1 >= 0)  {
        front = *arrayQueue->head;
        int *tempP = arrayQueue->head;

        for(int i = 0; i < arrayQueue->maxLength - 1 && arrayQueue->rear != 0; i++) {
            *tempP = *(tempP + 1);
            tempP = tempP + 1;
        }
        arrayQueue->rear = arrayQueue->rear - 1;

        arrayQueue->length--;
        return front;
    } else {
        printf("\tArray at max length\n");
    }

    return -1;
}

void print_Array_Queue(Array_Queue *arrayQueue) {
    int *tempP = arrayQueue->head;    
    for(int i = 0; i < arrayQueue->maxLength; i++) {
        printf("%i ", *tempP);
        tempP = tempP + 1;
    }
}
