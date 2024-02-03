#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c, discriminant;
    double r1, r2;

    printf("Input the first number: ");
    scanf("%i", &a);
    printf("Input the second number: ");
    scanf("%i", &b);
    printf("Input the third number: ");
    scanf("%i", &c);
    
    discriminant = pow(b,2) - 4 * a * c;

    if(discriminant > 0 && a != 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root1 = %.5lf\n", r1);
        printf("Root2 = %.5lf", r2);
    } else {
        printf("Can't find roots");
    }

    return 0;
}
