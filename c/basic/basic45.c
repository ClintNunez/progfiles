#include <stdio.h>

int main() {
    float value = 0;
    for(int i = 1; i <= 50; i++) {
        value += (float)1 / i;
    }

    printf("Value of S: %.2f", value);

    return 0;
}
