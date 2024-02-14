#include <stdio.h>

int main() {
    long n;

    printf("Input number of straight lines:\n");
    scanf("%ld", &n);

    printf("Maximum number of regions obtained by drawing %ld given straight lines:\n", n);
    printf("%ld\n", (n * n + n + 2) / 2);
    return 0;
}
