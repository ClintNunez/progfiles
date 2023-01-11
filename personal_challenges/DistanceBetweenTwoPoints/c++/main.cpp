#include <iostream>
#include <math.h>
#include <utility>

int calculateDistance(std::pair<double *, double *> pPoint1, std::pair<double *, double *> pPoint2) {
    return sqrt(pow((*pPoint2.first - *pPoint1.first), 2) + pow((*pPoint2.second - *pPoint1.second), 2));
}

int main() {
    double x1, y1, x2, y2;
    
    std::cout << "Enter x and y for point 1: ";
    std::cin >> x1 >> y1;

    std::pair<double *, double *> point1 = std::make_pair(&x1, &y1);

    std::cout << "Enter x and y for point 2: ";
    std::cin >> x2 >> y2;

    std::pair<double *, double *> point2 = std::make_pair(&x2, &y2);

    std::cout << "Distance between point 1 and point 2 is " << calculateDistance(point1, point2) << std::endl;

    return 0;
}
