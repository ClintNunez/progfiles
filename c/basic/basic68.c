#include <math.h>
#include <stdio.h>

int main() {
    for(int i = 0; i < 11; i++) {
        printf("%i %.0f %lf\n", i, pow(2, i), pow(2, -i));
    } 

    return 0;
}
