#include <stdio.h>

int main() {
    int n;

    printf("Input an integer: ");
    scanf("%i", &n);

    printf("All the divisor of %i are:\n", n);
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) printf("%i\n", i);
    }

    return 0;
}
