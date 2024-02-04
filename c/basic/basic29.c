#include <stdio.h>

int main() {
    int n, totalOddNum = 0;
    
    printf("Input the first number: ");
    scanf("%i", &n);
    
    if(n % 2 != 0) {
        totalOddNum += n;
    }

    printf("Input the second number: ");
    scanf("%i", &n);
    
    if(n % 2 != 0) {
        totalOddNum += n;
    }

    printf("Input the third number: ");
    scanf("%i", &n);
    
    if(n % 2 != 0) {
        totalOddNum += n;
    }

    printf("Input the fourth number: ");
    scanf("%i", &n);
    
    if(n % 2 != 0) {
        totalOddNum += n;
    }
    

    printf("Input the fifth number: ");
    scanf("%i", &n);
    
    if(n % 2 != 0) {
        totalOddNum += n;
    }
     

    printf("Sum of all odd values: %i", totalOddNum);
    return 0;
}
