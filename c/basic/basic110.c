#include <stdio.h>

int main() {
    int input;

    printf("Input number: ");
    scanf("%i", &input);

    if(input > 0) {
        if(input % 2 == 0) {
            printf("Number is positive-even");
        } else {
            printf("Number is positive-odd");
        }
    } else {
        if(input % 2 == 0) {
            printf("Number is negative-even");
        } else {
            printf("Number is negative-odd");
        }
    }
    return 0;
}
