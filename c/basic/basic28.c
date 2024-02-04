#include <stdio.h>

int main() {
    int n, totalpNum = 0;
    float pNum = 0;
    
    printf("Input the first number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
        totalpNum += n;
    }

    printf("Input the second number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
        totalpNum += n;
    }    

    printf("Input the third number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
        totalpNum += n;
    }

    printf("Input the fourth number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
        totalpNum += n;
    }

    printf("Input the fifth number: ");
    scanf("%i", &n);
    
    if(n > 0) {
        pNum++;
        totalpNum += n;
    } 

    printf("Number of positive numbers: %.0f\n", pNum);
    printf("Average value of the said positive numbers: %.2f", totalpNum / pNum);
    return 0;
}
