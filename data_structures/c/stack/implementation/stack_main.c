#include <stdio.h>
#include <stdbool.h>

#include "custom_stack_header.h"

int main() {
    Array_Stack *arrayStack = new_Array_Stack(5);

    pushStack(arrayStack, 5);
    pushStack(arrayStack, 4);
    pushStack(arrayStack, 3);
    pushStack(arrayStack, 2);
    pushStack(arrayStack, 1);

    printStack(arrayStack);

    int top = popStack(arrayStack);
    printf("Removed top: %i\n", top);

    printStack(arrayStack);

    top = peekStack(arrayStack);
    printf("Current top: %i\n", top);

    return 0;
}
