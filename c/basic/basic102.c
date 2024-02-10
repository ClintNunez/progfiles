#include <stdio.h>
#include <stdbool.h>

bool isAscending(int numArr[4]) {
    for(int i = 0; i < 2; i++) {
        if(numArr[i] > numArr[i + 1]) return false;
    }

    return true;
}

int main() {
    int numArr[4];

    printf("Input 3 integers: ");

    for(int i = 0; i < 3; i++) {
        scanf("%i", &numArr[i]);
    }

    printf("Original numbers: ");
    for(int i = 0; i < 3; i++) {
        printf("%i ", numArr[i]);
    }
    printf("\n");

    printf("Sorted numbers: ");
    while(!isAscending(numArr)) {
        for(int i = 0; i < 2; i++) {
            if(numArr[i] > numArr[i + 1]) {
                numArr[i] = numArr[i] + numArr[i + 1];
                numArr[i + 1] = numArr[i] - numArr[i + 1];
                numArr[i] = numArr[i] - numArr[i + 1];
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("%i ", numArr[i]);
    }

    return 0;
}
