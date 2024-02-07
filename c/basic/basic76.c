#include <stdio.h>
#include <math.h>

int main() {
    for(int i = 0; i <= 20; i++) {
        printf("%5i%5.f%5.f\n", i, pow(i, 2), pow(i, 3));
    }

    return 0;
}
