#include <stdio.h>

int main() {
    int n1, n2, sum = 0;

    printf("Input the first integer: ");
    scanf("%i", &n1);
    printf("Input the second integer: ");
    scanf("%i", &n2);

    for(;n1 <= n2; n1++) {
        if(n1 % 17 != 0) sum += n1;
    }

    printf("Sum: %i", sum);
    return 0;
}

