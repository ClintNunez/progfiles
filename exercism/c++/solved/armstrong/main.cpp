#include "armstrong_numbers.h"
#include <iostream>

int main() {
    std::cout << "Enter number to check if it is an armstrong number: ";
    int number; std::cin >> number;

    if(armstrong_numbers::is_armstrong_number(number)) {
        std::cout << number << " is an armstrong number" << std::endl;
    } else {
        std::cout << number << " is not an armstrong number" << std::endl;
    }

    return 0;
}
