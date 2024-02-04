#include <stdio.h>

int main() {
    int n1, n2;

    printf("Input the first number: ");
    scanf("%i", &n1);
    printf("Input the second number: ");
    scanf("%i", &n2);
    
    if(n1 > n2) {
        if(n1 % n2 == 0) {
            printf("multiplied");
        } else {
            printf("not multiplied");
        }
    } else {
        if(n2 % n1 == 0) {
            printf("multiplied");
        } else {
            printf("not multiplied");
        }
    }

    return 0;
}
