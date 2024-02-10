#include <stdio.h>

int main() {
    int pos = 1, max, n;

    printf("Input 7 numbers (int/float):\n");
    scanf("%i", &n);
    max = n;
    for(int i = 2; i < 8; i++) {
        scanf("%i", &n);
        if(n > max) {
            max = n;
            pos = i;
        }     
    }
    
    printf("Maximum value: %i\n", max);
    printf("Position: %i", pos);

    return 0;
}
