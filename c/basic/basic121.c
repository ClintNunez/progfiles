#include <stdio.h>

int main() {
    int n;

    printf("Input a number (integer values): ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%i\n", i);
        }
    }


    return 0;
}
