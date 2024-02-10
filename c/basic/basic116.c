#include <stdio.h>

int main() {
    int a, b; 

    printf("Input two numbers (integer values):");
    scanf("%i %i", &a, &b);

    if(a > b) {
        printf("Descending order");
    } else {
        printf("Ascending order");
    }

    return 0;
}
