#include <stdio.h>

int main() {
    int numArr[7], n;

    printf("Input the 7 members of the array:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%i", &n); 

        if(n <= 0) n = 100;
        numArr[i] = n;
    }

    for (int i = 0; i < 7; i++) {
        printf("n[%i] = %i\n", i, numArr[i]);
    }

    return 0;
}
