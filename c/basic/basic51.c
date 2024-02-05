#include <stdio.h>

int main() {
    int numArr[6], temp;

    printf("Input the 6 members of the array:\n");

    for (int i = 0; i < 6; i++) {
        scanf("%i", &numArr[i]);
    }

    for (int i = 0, j = 5; i < j; i++, j--) {
        temp = numArr[i];
        numArr[i] = numArr[j];
        numArr[j] = temp;
    }

    for (int i = 0; i < 6; i++) {
        printf("array_n[%i] = %i\n", i, numArr[i]);
    }
    
    return 0;
}
