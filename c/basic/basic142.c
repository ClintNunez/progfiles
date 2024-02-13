#include <stdio.h>

int main() {
    int h1, h2, t;

    printf("Input two adjoined sides of the parallelogram: ");
    scanf("%i %i", &h1, &h2);

    printf("Input the diagonal of the parallelogram: ");
    scanf("%i", &t);

    if(t * t == h1 * h1 + h2 * h2) {
        printf("This is a rectangle.");
    } else if(h1 == h2) {
        printf("This is a rhombus.");
    }

    return 0;
}
