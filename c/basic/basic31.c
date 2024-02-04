#include <stdio.h>

int main() {
    int n;

    printf("Input an integer: ");
    scanf("%i", &n);

    if(n == 0) {
        printf("Even\n");
    }else if(n % 2 == 0) {
        if(n > 0) {
            printf("Positive Even\n");
        } else {
            printf("Negative Even\n");
        }
    } else {
        if(n > 0) {
            printf("Positive Odd\n");
        } else {
            printf("Negative Odd\n");
        }
    }   

    return 0;
}
