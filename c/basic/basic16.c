#include <stdio.h>

int main() {
    int amount;

    printf("Input the amount: ");
    scanf("%i", &amount);

    printf("%i Note(s) of 100.00\n", amount / 100);
    amount = amount % 100;
    printf("%i Note(s) of 50.00\n", amount / 50);
    amount = amount % 50;
    printf("%i Note(s) of 20.00\n", amount / 20);
    amount = amount % 20;
    printf("%i Note(s) of 10.00\n", amount / 10);
    amount = amount % 10;
    printf("%i Note(s) of 5.00\n", amount / 5);
    amount = amount % 5;
    printf("%i Note(s) of 2.00\n", amount / 2);
    amount = amount % 2;
    printf("%i Note(s) of 1.00\n", amount / 1);
    amount = amount % 1;

    return 0;
}
