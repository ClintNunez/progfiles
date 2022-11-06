#include "triangle.h"
#include<iostream>

int main() {
    std::cout << "Enter sides: ";
    double s1; std::cin >> s1;
    double s2; std::cin >> s2;
    double s3; std::cin >> s3;
    
    if(triangle::flavor::equilateral == triangle::kind(s1, s2, s3)) {
        std::cout << "equilateral" << std::endl;
    } else if(triangle::flavor::isosceles == triangle::kind(s1, s2, s3)) {
        std::cout << "isosceles" << std::endl;
    } else if(triangle::flavor::scalene == triangle::kind(s1, s2, s3)) {
        std::cout << "scalene" << std::endl;
    }
    
    return 0;
}
