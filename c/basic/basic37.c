#include <stdio.h>

int main() {
    int x, y;

    printf("Input the Coordinate(x,y)\n");
    printf("x: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%i", &y);

    if(x > 0) {
        if(y > 0) {
            printf("Quadrant-I(+,+)");
        } else {
            printf("Quadrant-IV(+,-)");
        }
    } else {
        if(y > 0) {
            printf("Quadrant-II(-,+)");
        } else {
            printf("Quadrant-III(-,-)");
        }
    }
    return 0;
}
