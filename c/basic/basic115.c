#include <stdio.h>

int main() {
    int min, max; 
    float ave = 0;

    printf("Input two numbers (integer values):");
    scanf("%i %i", &min, &max);

    printf("Sequence from the lowest to highest number:\n");
    for(int i = min; i <= max; i++) {
        printf("%i ", i);
        ave += i;
    }
    printf("\n");

    printf("Average value of the said sequence: %.2f", ave / ((max - min) + 1));

    return 0;
}
