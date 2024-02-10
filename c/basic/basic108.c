#include <stdio.h>

int main() {
    int n1, n2, sum = 0;

    printf("Input the first integer number: ");
    scanf("%i", &n1);

    printf("Input the second integer number (greater than first integer): ");
    scanf("%i", &n2);

    printf("Sum of all odd values between %i and %i:\n", n1, n2);
    for(int i = n1 + 1; i < n2; i++) {
        if(i % 2 != 0) sum += i;
    }
    printf("%i\n", sum);
    
    sum = 0;
    printf("Sum of all even values between %i and %i:\n", n1, n2);
    for(int i = n1 + 1; i < n2; i++) {
        if(i % 2 == 0) sum += i;
    }
    printf("%i\n", sum);



    return 0;
}
