#include <stdio.h>

int main() {
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("%d\n", a + c);
    printf("%f\n", x + c);
    printf("%f\n", dx + x);
    printf("%li\n", ((int) dx) + ax);
    printf("%f\n", a + x);
    printf("%i\n", s + b);
    printf("%li\n", ax + b);
    printf("%hd\n", s + c);
    printf("%li\n", ax + c);
    printf("%lu\n", ax + ux);

    return 0;
}
