#include <stdio.h>

int main() {
    int binomial;
    for(int i = 0; i < 11; i++) {
        printf("%2i", i);
        binomial = 1;
        for(int j = 0; j <= i; j++) {
            if(i == 0 || j == 0) {
                printf("%4i ", binomial);
            } else {
                binomial = binomial * (i - j + 1) / j;
                printf("%4i", binomial);
            }
        }
        printf("\n");
    }

    return 0;
}
