#include <stdio.h>

int main() {
    int n = 0, factorial;

    printf("Input a positive number: ");
    scanf("%i", &n);

    factorial = n;
    for(int i = 1; i < n; i++) {
        factorial *= i;
    }


    while(factorial % 10 == 0) {
        factorial /= 10;
    }
    
    printf("The last non-zero digit of the said factorial: %i", factorial % 10);

    return 0;
}
