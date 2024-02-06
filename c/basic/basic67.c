#include <stdio.h>

int main() {
    float y = 1, x;
    int ctr = 0, n;

    printf("Input x: ");
    scanf("%f", &x);
    printf("Input n: ");
    scanf("%i", &n);
    
    while(ctr < n) {
        y *= x;
        ctr++;
    }
    
    printf("x=%f; n=%i\n", x, n);
    printf("x to power n = %f", y);

    return 0;
}
