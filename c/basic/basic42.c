#include <math.h>
#include <stdio.h>

int main() {
    int n;
    double ctr = 1;

    printf("Input number of lines: ");
    scanf("%i", &n);
    
    for(int i = 0; i < n; i++, ctr++) {
        printf("%.0f %.0f %.0f\n", ctr, pow(ctr, 2), pow(ctr, 3));
    }
    return 0;
}
