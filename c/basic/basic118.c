#include <stdio.h>

int main() {
    int n;
    float ave = 0;

    printf("Input five subject marks(0 - 100):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%i", &n);

        if(n < 0 || n > 100) break;

        ave += n;
        if(i == 4) {
            printf("Average marks = %.2f", ave / 5);
        }
    }

    return 0;
}
