#include <stdio.h>

int main() {
    int n, tempN;

    printf("Input an integer number: ");
    scanf("%i", &n);

    printf("Next 10 consecutive odd numbers: ");
    tempN = n + 1;
    for(int i = 0; i < 10; tempN++) {
        if(tempN % 2 != 0) {
            printf("%i, ", tempN);
            i++;
        }
    }
    printf("\n");

    printf("Next 10 consecutive even numbers: ");
    tempN = n + 1;
    for(int i = 0; i < 10; tempN++) {
        if(tempN % 2 == 0) {
            printf("%i, ", tempN);
            i++;
        }
    }
    printf("\n");

    return 0;
}

