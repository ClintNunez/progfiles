#include <stdio.h>

int main() {
    float n;

    printf("Input number: ");
    scanf("%f", &n);

    if(n >= 0 && n <= 30) {
        printf("Range [0, 30]");
    } else if(n >= 31 && n <= 50) {
        printf("Range (30, 50]");
    } else if(n >= 51 && n <= 80) {
        printf("Range (50, 80]");
    } else if(n >= 81 && n <= 100) {
        printf("Range (80, 100]");
    }

    return 0;
}
