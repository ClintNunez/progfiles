#include <stdio.h>

int main() {
    int dist;
    float spentFuel;

    printf("Input total distance in km: ");
    scanf("%i", &dist);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &spentFuel);

    printf("Average consumption (km/lt): %.3f", dist / spentFuel);

    return 0;
}
