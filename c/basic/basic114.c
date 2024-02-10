#include <stdio.h>

int main() {
    int min, max, sum = 0;

    printf("Input two numbers (integer values):");
    scanf("%i %i", &min, &max);

    for(int i = min + 1; i < max; i++) {
        if(i % 2 == 0) sum += i;
    }

    printf("Sum of all even values betwen %i and %i\n%i", min, max, sum);

    return 0;
}
