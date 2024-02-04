#include <stdio.h>

int main() {
    int n1, n2, sum = 0;

    printf("Input the first integer: ");
    scanf("%i", &n1);
    printf("Input the second integer: ");
    scanf("%i", &n2);

    for(;n1 < n2; n1++) {
        if(n1 % 7 == 2 || n1 % 7 == 3) printf("%i\n", n1);
    }
    return 0;
}

