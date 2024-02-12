#include <math.h>
#include <stdio.h>
#include <stdbool.h>

double TriangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    return fabs((x1*(y2-y3) + x2*(y3 - y1) + x3*(y1-y2))/2.0);
}

bool InsideTriangle(double x1, double y1, double x2, double y2, double x3, double y3, double xp, double yp) {
    double triangleArea = TriangleArea(x1, y1, x2, y2, x3, y3);
    double areaSum = 0;
    areaSum += TriangleArea(x1, y1, x2, y2, xp, yp);
    areaSum += TriangleArea(x1, y1, x3, y3, xp, yp);
    areaSum += TriangleArea(x2, y2, x3, y3, xp, yp);

    if(triangleArea == areaSum) 
        return true;
    else 
        return false;
}

int main() {
    double x1, y1, x2, y2, x3, y3, xp, yp;

    printf("Input 3 points to form a triangle: ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("Input the point to check if it is inside the triangle or not: ");
    scanf("%lf %lf", &xp, &yp);

    if(InsideTriangle(x1, y1, x2, y2, x3, y3, xp, yp)) {
        printf("The point is inisde the triangle!");
    } else {
        printf("The point is not inisde the triangle!");
    }

}
