#include "trinary.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter trinary: ";
    std::string input_trinary; std::cin >> input_trinary;

    std::cout << trinary::to_decimal(input_trinary) << std::endl;
    
    return 0;
}
