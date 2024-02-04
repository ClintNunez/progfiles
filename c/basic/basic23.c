#include <stdio.h>

float absFloat(float n) {
    return (n < 0) ? n * -1 : n;
}

int main() {
    float n1, n2, n3, firstMax, finalMax;

    printf("Input the first number: ");
    scanf("%f", &n1);
    printf("Input the second number: ");
    scanf("%f", &n2);
    printf("Input the third number: ");
    scanf("%f", &n3);
 
    firstMax = (n1 + n2 - absFloat(n1 - n2)) / 2;
    finalMax = (firstMax + n3 - absFloat(firstMax - n3)) / 2;

    if(finalMax < n1 + n2 + n3 - finalMax) {
        printf("Perimeter = %.1f", n1 + n2 + n3);
    } else {
        printf("Invalid input");
    }

    return 0;
}
