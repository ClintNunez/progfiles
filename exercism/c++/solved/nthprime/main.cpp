#include "nth_prime.h"
#include <iostream>

int main() {
    std::cout << "Enter prime position: ";
    int prime_pos; std::cin >> prime_pos;

    int result = nth_prime::nth(prime_pos);

    std::cout << result << std::endl;

    return 0;
}
