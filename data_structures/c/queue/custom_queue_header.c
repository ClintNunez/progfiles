#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_queue_header.h"
    
Array_Queue new_Array_Queue(int length) {
    Array_Queue arrayQueue;
    int *array = malloc(sizeof(int) * length);

    for(int i = 0; i < length; i++) 
        array[i] = 0;

    arrayQueue.head = *array;
    arrayQueue.rear = *array;
    arrayQueue.length = length;
    
    return arrayQueue;
}

bool is_Array_Queue_Empty(Array_Queue arrayQueue) {

    return true;
}

bool is_Array_Queue_Full(Array_Queue arrayQueue) {
   return true; 
}

int array_Queue_Size(Array_Queue arrayQueue) {
    int tempP = arrayQueue.head, count = 0;
    
    while(tempP != arrayQueue.rear) {
        tempP++;
    }
    
    return count;
}

int peek_Array_Queue(Array_Queue arrayQueue) {
    return arrayQueue.head;    
}

int rear_Array_Queue(Array_Queue arrayQueue) {
    return arrayQueue.rear;    
}

void enqueue_Array_Queue(Array_Queue arrayQueue, int data) {
    if(array_Queue_Size(arrayQueue) + 1 < arrayQueue.length)  {
        arrayQueue.rear = data;
        arrayQueue.rear++;
    } else {
        printf("\tArray at max length\n");
    }
}

// shift contents of array instead of shifting the head pointer
int dequeue_Array_Queue(Array_Queue arrayQueue) {
    int front;
    if(array_Queue_Size(arrayQueue) - 1 >= 0)  {
        front = arrayQueue.head;

        if(arrayQueue.head != arrayQueue.rear) {
            arrayQueue.head++;
        }
        return front;
    } else {
        printf("\tArray at max length\n");
    }

    return -1;
}
