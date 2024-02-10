#include <stdio.h>

int main() {
    for(int a = 1, b = 100; a <= 51; a += 5, b-=10) {
        printf("a=%i\tb=%i\n", a, b);
    }
    return 0;
}
