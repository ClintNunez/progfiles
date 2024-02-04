#include <stdio.h>

int main() {
    int max, pos = 1, n;

    printf("Input 5 integers:\n");
    scanf("%i", &max);
    for(int i = 2; i <= 5; i++) {
        scanf("%i", &n);
        if(n > max) {
            max = n;
            pos = i;
        };
    }

    printf("Highest value: %i\nPosition: %i\n", max, pos);

    return 0;
}

