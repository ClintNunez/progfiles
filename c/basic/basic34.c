#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, temp, sum = 0;

    printf("Input a pair of numbers (for example 10,2):\n");
    printf("Input first number of the pair: ");
    scanf("%i", &n1);
    printf("Input second number of the pair: ");
    scanf("%i", &n2);
    
    temp = (n1 + n2 + abs(n1 - n2)) / 2;
    n1 = n2; n2 = temp;

    printf("List of odd numbers: \n");
    for(;n1 <= n2; n1++) {
        if(n1 % 2 != 0) {
            printf("%i\n", n1);
            sum += n1;
        }
    }
    printf("Sum=%i", sum);
    
    return 0;
}
