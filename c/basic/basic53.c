#include <stdio.h>

int main() {
    float p, r, t;

    printf("Input Data:\n");
    printf("p = ");
    scanf("%f", &p);
    printf("r = ");
    scanf("%f", &r);
    printf("t = ");
    scanf("%f", &t);

    r /= 100;

    printf("Simple interest = %.2f", (p * (1 + (r * t))) - p);
    return 0;
}
