#include <stdio.h>

int main() {
    double n1, n2;

    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%lf",&n1);
    printf("y: ");
    scanf("%lf",&n2);

    if(n2 == 0) {
        printf("Division not possible\n");
    } else {
        printf("%.2f", n1 / n2);
    }
    return 0;
}
