#include <math.h>
#include <stdio.h>

int main() {
    int limit;

    printf("List of square of each one of the even values from 1 to: ");
    scanf("%i", &limit);

    for(int i = 2; i <= limit; i++) {
        if(i % 2 == 0) {
            printf("%i^%i = %.0f\n",i, i, pow(i, 2));
        }
    }
    return 0;
}
