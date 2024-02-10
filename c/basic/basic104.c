#include <stdio.h>

int main() {
    float p, newP, incP;

    printf("Input item price: ");
    scanf("%f", &p);

    if(p >= 100.00 && p <= 400.00) {
        incP = p * 0.14;
        newP = p + incP; 
        printf("New Item price: %.2f\nIncreased price: %.2f\nIncrease percentage: 14%%", newP, incP);
    } else if(p >= 400.01 && p <= 800.00) {
        incP = p * 0.11;
        newP = p + incP; 
        printf("New Item price: %.2f\nIncreased price: %.2f\nIncrease percentage: 11%%", newP, incP);
    } else if(p >= 800.01 && p <= 1200.00) {
        incP = p * 0.09;
        newP = p + incP; 
        printf("New Item price: %.2f\nIncreased price: %.2f\nIncrease percentage: 9%%", newP, incP);
    } else if(p >= 1200.01 && p <= 2000.00) {
        incP = p * 0.06;
        newP = p + incP; 
        printf("New Item price: %.2f\nIncreased price: %.2f\nIncrease percentage: 6%%", newP, incP);
    } else if(p > 2000.00) {
        incP = p * 0.03;
        newP = p + incP; 
        printf("New Item price: %.2f\nIncreased price: %.2f\nIncrease percentage: 3%%", newP, incP);
    }




    return 0;
}
