#include <stdio.h>

int main() {
    int p, day;
    float r;

    printf("Input principal amount (0 to exit): "); 
    scanf("%i", &p);

    while(p != 0) {
        printf("Input rate of interest, days: ");
        scanf("%f %i", &r, &day);

        printf("The interest amount is $%.2f\n", p * r * (day / 365.0));

        printf("Input principal amount (0 to exit): "); 
        scanf("%i", &p);
    }

    return 0;
}
