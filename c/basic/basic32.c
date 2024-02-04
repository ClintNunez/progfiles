#include <stdio.h>

int main() {
    int n;

    printf("Input an integer: ");
    scanf("%i", &n);

    for (int i = 1; i <= 100; i++) {
        if(i % n == 3) {
            printf("%i\n", i);
        }
    }

    return 0;
}
