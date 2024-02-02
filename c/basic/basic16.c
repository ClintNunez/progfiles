#include <stdio.h>

int main() {
    int amount;

    printf("Input the amount: ");
    scanf("%i", &amount);

    printf("%i Note(s) of 100.00\n", amount / 100);
    printf("%i Note(s) of 50.00\n", (amount % 100) / 50);
    printf("%i Note(s) of 20.00\n", (amount % 100) % 50 / 20);

    return 0;
}
