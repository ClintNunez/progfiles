#include <math.h>
#include <stdio.h>

int main() {
    int x1, y1, x2, y2;

    printf("Input x1: ");
    scanf("%i", &x1);

    printf("Input y1: ");
    scanf("%i", &y1);
    
    printf("Input x2: ");
    scanf("%i", &x2);

    printf("Input y2: ");
    scanf("%i", &y2);

    printf("Distance between the said points: %.4lf", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    return 0;
}
