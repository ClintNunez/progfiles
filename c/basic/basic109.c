#include <stdio.h>

int main() {
    int n;

    printf("Input integer number: ");
    scanf("%i", &n);
    
    if(n > 4 && n < 101) {
        printf("Square of each even between 1 and %i\n", n);
        for(int i = 2; i < n; i++) {
            if(i % 2 == 0) 
                printf("%i^2 = %i\n", i, i * i);
        }

        printf("\nSquare of each odd between 1 and %i\n", n);
        for(int i = 3; i < n; i++) {
            if(i % 2 != 0) 
                printf("%i^2 = %i\n", i, i * i);
        }
        printf("\n");
    }

    

    return 0;
}
