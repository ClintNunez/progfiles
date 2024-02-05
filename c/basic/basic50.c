#include <stdio.h>

int main() {
    float numArr[5];
    
    printf("Input the 5 members of the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &numArr[i]);
    }

    for (int i = 0; i < 5; i++) {
        if(numArr[i] < 5) {
            printf("A[%i] = %.1f", i, numArr[i]);
        }
    }

    return 0;
}
