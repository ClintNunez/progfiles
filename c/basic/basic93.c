#include <stdio.h>
#include <stdbool.h>

int main() {
    int primeArr[7] = {2, 3, 5, 7, 11, 13}, n;
    bool isAlmostPrime = false;

    printf("Input positive integer to know if it is an almost prime: ");
    scanf("%i", &n);

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            if(primeArr[i] * primeArr[j] == n) {
                isAlmostPrime = true;
                break;
            }
        }

        if(isAlmostPrime) {
            break;
        }
    }

    if(isAlmostPrime) {
        printf("%i is an almost prime number", n);
    } else {
        printf("%i is not an almost prime number", n);
    }


    return 0;
}
