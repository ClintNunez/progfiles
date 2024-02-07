#include <stdio.h>

int main() {
    int n, ctr = 0;

    printf("Input number: ");
    scanf("%i", &n);

    while(n != 0) {
        if(n % 10 == 3) {
            ctr++;
        }     
        n /= 10;
    }

    printf("The number of threes in the said number is %i", ctr);

    return 0;
}
