#include <stdio.h>

int main() {
    int n1, n2;

    printf("Input two integer values: ");
    scanf("%i %i", &n1, &n2);

    if(n2 != 0) {
        printf("Result: %.2f", (float) n1 / n2);
    }
    
    return 0;
}
