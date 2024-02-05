#include <stdio.h>

int main() {
    int a, b, ctr = 1;

    printf("Input number of lines: ");
    scanf("%i", &a);
    printf("Number of characters in a line: ");
    scanf("%i", &b);
    
    for(int i = 0; i < a; i++) {
        for(; ctr <= b + (b * i); ctr++) {
            printf("%i ", ctr);
        }
        printf("\n");
    }    

    return 0;
}
