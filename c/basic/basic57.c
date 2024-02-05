#include <stdio.h>

int main() {
    int n, rev = 0;

    printf("Input number: ");
    scanf("%i", &n);

    while(n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    printf("The reversal of the said number: %i", rev);

}
