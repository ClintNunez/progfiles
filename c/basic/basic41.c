#include <stdio.h>

int main() {
    int n, ctr = 1;

    printf("Input number of lines: ");
    scanf("%i", &n);
    
    for(int i = 0; i < n; i++) {
        printf("%i %i %i\n", ctr, ctr + 1, ctr + 2);
        ctr += 3;
    }

    return 0;
}
