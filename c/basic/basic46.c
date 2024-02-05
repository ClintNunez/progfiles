
#include <stdio.h>

int main() {
    float value = 0, divisor = 1;

    for(int i = 1; i <= 7; i+=2) {
        value += i / divisor;
        divisor *= 2;
    }

    printf("Value of S: %.2f", value);

    return 0;
}
