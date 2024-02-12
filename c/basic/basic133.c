#include <stdio.h>

int main() {
    int n1, n2, ctr = 0;

    printf("Input two integer values: ");
    scanf("%i %i", &n1, &n2);

    n1 += n2;

    while(n1 != 0) {
        n1 /= 10;
        ctr++;
    }
   
    printf("Number of digits of the sum value of the said numbers: %i", ctr);

    return 0;
}
