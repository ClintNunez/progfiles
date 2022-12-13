#include "grains.h"
#include<iostream>

int main() {
    std::cout << "Enter square position: ";
    int squarePos; std::cin >> squarePos;

    std::cout << grains::square(squarePos) << std::endl;
    std::cout << grains::total() << std::endl;
    return 0;
}
