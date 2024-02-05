#include <stdio.h>

int main() {
    int n;
    printf("Integer value = ");
    scanf("%i", &n);

    n = n << 2;

    printf("The left shifted data is = %i", n);

    return 0;
}
