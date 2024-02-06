#include <math.h>
#include <stdio.h>

int main() {
    int n, sum = 0; 

    printf("Input a positive number less than 100: ");
    scanf("%i", &n);

    for(int m = 1, adder = 0; m <= n; adder++, m += adder) {
        sum += pow(m, 4);
    }

    printf("Sum of the series is %i", sum);

    return 0;
}
