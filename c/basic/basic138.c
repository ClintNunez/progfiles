#include <stdio.h>

int main() {
    double x[4], y[4], slope1, slope2;

    printf("Input P(x1, y1): ");
    scanf("%lf %lf", &x[0], &y[0]);
    printf("Input P(x2, y2): ");
    scanf("%lf %lf", &x[1], &y[1]);
    printf("Input P(x3, y3): ");
    scanf("%lf %lf", &x[2], &y[2]);
    printf("Input P(x4, y4): ");
    scanf("%lf %lf", &x[3], &y[3]);

    slope1 = (y[1] - y[0]) / (x[1] - x[0]);
    slope2 = (y[3] - y[2]) / (x[3] - x[2]);

    if(slope1 == slope2) {
        printf("PQ and RS are parallel.");
    } else {
        printf("PQ and RS are not parallel.");
    }

    return 0;
}
