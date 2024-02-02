#include <stdio.h>

int main() {
    int fInteger, sInteger;
    
    printf("Input the first integer: ");
    scanf("%i", &fInteger);
    
    printf("Input the second integer: ");
    scanf("%i", &sInteger);
    
    printf("Product of the above two integers = %i", fInteger * sInteger);
}
