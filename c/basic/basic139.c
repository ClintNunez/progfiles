#include <stdio.h>

int main() {
    int limit, n, sum = 0;

    printf("Input number of terms in the sequence: ");
    scanf("%i", &limit);
    
    printf("Input the terms of the said sequence: ");
    for (int i = 0; i < limit; i++) {
        scanf("%i", &n);
        sum += n;
    }

    printf("Maximum sum of a contiguous subsequence:\n%i", sum);

    return 0;
}
