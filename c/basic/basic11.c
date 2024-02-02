#include <stdio.h>

int main() {
    double wItem1, wItem2, nItem1, nItem2;

    printf("Weight - Item1: ");
    scanf("%lf", &wItem1);
    printf("No. of Item1: ");
    scanf("%lf", &nItem1);

    printf("Weight - Item2: ");
    scanf("%lf", &wItem2);
    printf("No. of Item2: ");
    scanf("%lf", &nItem2);
    
    printf("Average Value = %.6f", ((wItem1 * nItem1) + (wItem2 * nItem2)) / (nItem1 + nItem2));
    return 0;
}
