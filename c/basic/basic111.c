#include <stdio.h>

int main() {
    int input;

    printf("Input a number (integer): ");
    scanf("%i", &input);

    printf("Remainder value is 3 after dividing all numbers between 1 and 100\n");
    for(int i = 2; i <= 99; i++) {
        if(i % input == 3) {
            printf("%i ", i);
        }
    }

    return 0;
}
