#include <stdio.h>
#include <stdbool.h>

#include "custom_stack_header.h"

int main() {
    Array_Stack *arrayStack = new_Array_Stack(5);

    push_Monotonic_Increasing_Stack(arrayStack, 8);
    printStack(arrayStack);
    push_Monotonic_Increasing_Stack(arrayStack, 6);
    printStack(arrayStack);
    push_Monotonic_Increasing_Stack(arrayStack, 5);
    printStack(arrayStack);
    push_Monotonic_Increasing_Stack(arrayStack, 4);
    printStack(arrayStack);
    push_Monotonic_Increasing_Stack(arrayStack, 7);
    printStack(arrayStack);

    int top = popStack(arrayStack);
    printf("Removed top: %i\n", top);

    printStack(arrayStack);

    top = peekStack(arrayStack);
    printf("Current top: %i\n", top);

    return 0;
}
