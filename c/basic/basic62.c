#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Input positive number less than 500: ");
    scanf("%i", &n);

    if(n < 500) {
        while(n != 0) {
            sum += n % 10;
            n /= 10;
        }
    }

    printf("The reversal of the said number: %i", sum);

}
