#include "luhn.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter luhn number: ";
    std::string luhn; std::getline(std::cin, luhn);
    if(luhn::valid(luhn)) {
        std::cout << "Luhn number is valid" << std::endl;
    } else {
        std::cout << "Luhn number is invalid" << std::endl;
    }

    return 0;
}
