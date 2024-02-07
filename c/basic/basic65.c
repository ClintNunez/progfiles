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
    int limit = 200, n = 2, i = 0;

    while(n < limit) {
        if(isPrime(n)) {
            printf("%5i", n);
            i++;
        }
        n++;

        if(i == 10){
            printf("\n");
            i = 0;
        }
    }
    
    return 0;
}
