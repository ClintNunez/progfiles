#include <stdio.h>

int main() {
    int x, y;

    printf("Input x: ");
    scanf("%i", &x);
    printf("Input y: ");
    scanf("%i", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping the value of x & y: %i %i", x , y);

    return 0;
}
