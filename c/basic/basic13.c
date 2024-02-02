#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstInt, secondInt, thirdInt;

    printf("Input the first integer: ");
    scanf("%i", &firstInt);

    printf("Input the second integer: ");
    scanf("%i", &secondInt);
    
    printf("Input the third integer: ");
    scanf("%i", &thirdInt);

    if(firstInt > secondInt) {
        if(firstInt > thirdInt) {
            printf("Maximum value of three integers: %i", firstInt);
        } else {
            printf("Maximum value of three integers: %i", thirdInt);
        }
    } else {
        if(secondInt > thirdInt) {
            printf("Maximum value of three integers: %i", secondInt);
        } else {
            printf("Maximum value of three integers: %i", thirdInt);
        }
    }

    // given solution

    int firstMax, finalMax;

    firstMax = (firstInt + secondInt + abs(firstInt - secondInt)) / 2;
    finalMax = (firstMax + thirdInt + abs(firstMax - thirdInt)) / 2;

    printf("\nMaximum value of three integers: %i", finalMax);

    return 0;
}
