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
    int limit = 200, n = 2;
    while(n < limit) {
        for(int j = 0; j < 20; j++) {
            if(isPrime(n)) {
                printf("%i ", n);
            }
            n++;
        }    

        printf("\n");
    }
    
    return 0;
}
