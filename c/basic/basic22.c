#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, sum = 0;

    printf("Input the first number: ");
    scanf("%i", &n1);
    printf("Input the second number: ");
    scanf("%i", &n2);
    printf("Input the third number: ");
    scanf("%i", &n3);
    printf("Input the fourth number: ");
    scanf("%i", &n4);
    printf("Input the fifth number: ");
    scanf("%i", &n5);
    
    if(n1 % 2 != 0) {
       sum += n1; 
    } 
    
    if(n2 % 2 != 0) {
       sum += n2; 
    } 

    if(n3 % 2 != 0) {
       sum += n3; 
    } 

    if(n4 % 2 != 0) {
       sum += n4; 
    } 

    if(n5 % 2 != 0) {
       sum += n5; 
    } 

    printf("Sum of all odd values: %i", sum);
    return 0;
}
