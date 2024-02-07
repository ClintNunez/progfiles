#include <stdio.h>

int main() {
    printf("x\tx+2\tx+4\tx+6\n");
    printf("--------------------------------\n");
    for(int i = 0, x = 1; i < 5; i++, x += 3) {
        printf("%i\t%i\t%i\t%i\t\n", x, x+2, x+4, x+6);
    }

    return 0;
}
