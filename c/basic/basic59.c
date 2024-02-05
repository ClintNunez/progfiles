#include <stdio.h>

int main() {
    int n; 
    float sum = 1;

    printf("Input limit: ");
    scanf("%i", &n);

    for(int i = 2; i <= n; i++) {
        sum += (float) 1 / i;
    }

    printf("Sum = %f", sum);

    return 0;
}
