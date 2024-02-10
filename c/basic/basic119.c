#include <stdio.h>

int main() {
    int min, max, temp, sum = 0;

    printf("Input two numbers (integer values):");
    scanf("%i %i", &min, &max);

    if(min > max) {
        temp = min;
        min = max;
        max = temp;
    }

    for(int i = min; i <= max; i++) {
        if(i % 7 != 0) sum += i;
    }

    printf("Sum of all even values between said numbers not divisible by seven\n%i", sum);

    return 0;
}
