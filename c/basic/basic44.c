#include <stdio.h>

int main() {
    double n, average = 0;
    int ctr = 0;

    printf("Input Mathematics marks (0 to terminate):\n");
    do {
        scanf("%lf", &n);
        average += n;
        ctr++;
    }while(n > 0);

    printf("Average marks in Mathematics: %.2lf", average / (ctr - 1));

    return 0;
}
