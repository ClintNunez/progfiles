#include <stdio.h>

int main() {
    int input, nEven = 0, nOdd = 0, nPos = 0, nNeg = 0;

    printf("Input 7 numbers :\n");
    for(int i = 0; i < 7; i++) {
        scanf("%i", &input);
        if(input > 0) {
            if(input % 2 == 0) {
                nPos++; nEven++;
            } else {
                nPos++; nOdd++;
            }
        } else {
            if(input % 2 == 0) {
                nNeg++; nEven++;
            } else {
                nNeg++; nOdd++;
            }
        }
    }

    printf("Number of even values: %i\n", nEven);
    printf("Number of odd values: %i\n", nOdd);
    printf("Number of positive values: %i\n", nPos);
    printf("Number of negative values: %i\n", nNeg);
    return 0;
}
