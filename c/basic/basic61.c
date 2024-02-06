#include <math.h>
#include <stdio.h>

int main() {
    float x;

    printf("Input value of x: ");
    scanf("%f", &x);

    printf("Value of sin(1/x) is %.4f", sin(1 / x));
    
    return 0;
}
