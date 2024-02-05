#include <stdio.h>

int main() {
    double min, max, n;

    printf("Input four numbers: ");
    scanf("%lf", &min);
    max = min;

    for(int i = 0; i < 3; i++) {
        scanf("%lf", &n);

        if(n > max) {
            max = n;
        } else if(n < min){
            min = n;
        }
    }

    printf("Difference is %.4lf", max - min);
    return 0;
}
