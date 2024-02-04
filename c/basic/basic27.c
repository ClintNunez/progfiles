#include <stdio.h>

int main() {
    int n, pNum = 0, nNum = 0;
    
    printf("Input the first number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
    } else {
        nNum++;
    }

    printf("Input the second number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
    } else {
        nNum++;
    }
    
    printf("Input the third number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
    } else {
        nNum++;
    }

    printf("Input the fourth number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
    } else {
        nNum++;
    }

    printf("Input the fifth number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
    } else {
        nNum++;
    }

    printf("Number of positive numbers: %i\n", pNum);
    printf("Number of negative numbers: %i", nNum);
    return 0;
}
