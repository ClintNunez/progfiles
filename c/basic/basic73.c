#include <stdio.h>

int main() {
    int n1, n2;

    printf("Input n1 and n2: ");
    scanf("%i %i", &n1, &n2);

    if(n1 % n2 == 0) {
        printf("%i is a multiple of %i", n1, n2);
    } else {
        printf("%i is not a multiple of %i", n1, n2);
    }
    
    return 0;
}
