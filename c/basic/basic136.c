#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int limit, n = 2, i = 0;

    printf("Input a number: ");
    scanf("%i", &limit);

    while(n <= limit) {
        if(isPrime(n)) {
            i++;
        }
        n++;
    }

    printf("Number of prime numbers which are less than or equal to %i\n%i", limit, i);
    
    return 0;
}

