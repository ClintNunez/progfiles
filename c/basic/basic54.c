#include <stdio.h>
#define INCH_PER_CM 0.39387007874

int main() {
    float c;

    printf("Input Data: ");
    scanf("%f", &c);
    
    printf("Distance of %.2f cms is = %.2f", c, c * INCH_PER_CM);

    return 0;
}
