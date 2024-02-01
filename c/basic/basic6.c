#include <stdio.h>
#include <math.h>

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Perimeter of the Circle = %.6f\n", (2 * M_PI * radius));
    printf("Area of the Circle = %.6f\n", (M_PI * pow(radius, 2.0)));

    return 0;
}
