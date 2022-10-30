#include "triangle.h"
#include<iostream>

int main() {
    std::cout << "Enter sides: ";
    double s1; std::cin >> s1;
    double s2; std::cin >> s2;
    double s3; std::cin >> s3;
    
    std::cout << triangle::kind(s1, s2, s3);
    
    return 0;
}
