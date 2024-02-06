#include <stdio.h>

int main() {
    int n;

    printf("Input value: ");
    scanf("%i", &n);

    printf("Original value: %i\n", n);
    n = (n >= 0) ? n : (n * -1);
    //n = abs(n);

    printf("Absolute value: %i\n", n);
    
    return 0;
}
