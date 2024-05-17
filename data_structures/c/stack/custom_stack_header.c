#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "custom_stack_header.h"


Array_Stack *new_Array_Stack(int maxLength) {
    Array_Stack *newArrayStack = malloc(sizeof(Array_Stack));
    int *array = malloc(sizeof * array * maxLength);

    newArrayStack->top = array;
    newArrayStack->length = 0;
    newArrayStack->maxLength = maxLength;

    return newArrayStack;
}

int popStack(Array_Stack *arrayStack) {
    if(arrayStack->length - 1 >= 0) {
        int top = *(arrayStack->top);
        arrayStack->top--;
        arrayStack->length--;
         
        return top;
    } else {
        printf("\tStack is empty\n");
    }

    return -1;
}

void pushStack(Array_Stack *arrayStack, int data) {
    if(arrayStack->length + 1 <= arrayStack->maxLength) {
        arrayStack->top++;
        *(arrayStack->top) = data;
        arrayStack->length++;
    } else {
        printf("\tStack is full\n");
    }
}

void push_Monotonic_Increasing_Stack(Array_Stack *arrayStack, int data) {
    if(arrayStack->length == 0) {
        *(arrayStack->top) = data;
        arrayStack->length++;
    } else if(arrayStack->length + 1 <= arrayStack->maxLength) {
        if(*(arrayStack->top) >= data) {
            arrayStack->top++;
            *(arrayStack->top) = data;
            arrayStack->length++;
        } else {
            while(*(arrayStack->top) < data) {
                    arrayStack->top--;
                    arrayStack->length--;
            }
            arrayStack->top++;
            *(arrayStack->top) = data;
            arrayStack->length++;
        }
    } else {
        printf("\tStack is full\n");
    }
}

void push_Monotonic_Decreasing_Stack(Array_Stack *arrayStack, int data) {
    if(arrayStack->length == 0) {
        *(arrayStack->top) = data;
        arrayStack->length++;
    } else if(arrayStack->length + 1 <= arrayStack->maxLength) {
        if(*(arrayStack->top) <= data) {
            arrayStack->top++;
            *(arrayStack->top) = data;
            arrayStack->length++;
        } else {
            while(*(arrayStack->top) > data) {
                    arrayStack->top--;
                    arrayStack->length--;
            }
            arrayStack->top++;
            *(arrayStack->top) = data;
            arrayStack->length++;
        }
    } else {
        printf("\tStack is full\n");
    }
}

int peekStack(Array_Stack *arrayStack) {
    return *(arrayStack->top);
}

bool isStackEmpty(Array_Stack *arrayStack) {
    return (arrayStack->length == 0) ? true : false;
}

bool isStackFull(Array_Stack *arrayStack) {
    return (arrayStack->length == arrayStack->maxLength) ? true : false;
}

void printStack(Array_Stack *arrayStack) {
    if(arrayStack->length > 0) {
        int *currentTop = arrayStack->top;
        printf("\t");
        for(int i = 0; i < arrayStack->length; i++) {
            printf("%i ", *currentTop);
            currentTop--;
        }
        printf("\n");
    } else {
        printf("\tStack is empty\n");
    }
}

