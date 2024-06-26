#ifndef CUSTOM_STACK_HEADER
#define CUSTOM_STACK_HEADER

typedef struct {
    int *top, length, maxLength;
} Array_Stack;

Array_Stack *new_Array_Stack(int maxLength);

void pushStack(Array_Stack *arrayStack, int data);
void push_Monotonic_Increasing_Stack(Array_Stack *arrayStack, int data);
void push_Monotonic_Decreasing_Stack(Array_Stack *arrayStack, int data);

int popStack(Array_Stack *arrayStack);

int peekStack(Array_Stack *arrayStack);
bool isStackFull(Array_Stack *arrayStack);
bool isStackEmpty(Array_Stack *arrayStack);
void printStack(Array_Stack *arrayStack);

#endif
