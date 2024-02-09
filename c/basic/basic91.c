#include <stdio.h>

int main() {
    int h, m;
    float angle;

    printf("Input hour(h) and minute(m) separated by a space: ");
    scanf("%i %i", &h, &m);

    angle = (h * 30) - (m * 5.5);
    angle = (angle < 0) ? angle * -1 : angle;
    if(angle == 360) angle = 0;
    if(angle > 180) angle = 360 - angle;

    printf("At %i:", h);
    if(m < 10) {
        printf("0%i", m);
    } else {
        printf("%i", m);
    }
    printf(" the angle is %.1f degrees", angle);
    

    return 0;
}
