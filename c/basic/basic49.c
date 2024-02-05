#include <stdio.h>

int main() {
    int numArr[7], n;


    // dumb solution, what is this
    printf("Input the first number of the array: ");
    scanf("%i", &n); 
    numArr[0] = n;
    for (int i = 1; i < 7; i++) {
        numArr[i] = numArr[i - 1] * 3;
    }

    for (int i = 0; i < 7; i++) {
        printf("n[%i] = %i\n", i, numArr[i]);
    }

    return 0;
}
