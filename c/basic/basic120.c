#include <stdio.h>

int main() {
    int n;
    printf("Input a number: ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++) {
        if(i != n) {
            printf("%i,", i);
        } else {
            printf("%i", i);
        }
    }

    return 0;
}
