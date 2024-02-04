#include <stdio.h>

int main() {
    int n1, n2;

    printf("Input a pair of numbers (for example 10,2 : 2,10):\n");
    printf("Input first number of the pair: ");
    scanf("%i", &n1);
    printf("Input second number of the pair: ");
    scanf("%i", &n2);

    if(n1 > n2) {
        printf("The pair is in descending order!");
    } else {
        printf("The pair is in ascending order!");
    } 

    return 0;
}
