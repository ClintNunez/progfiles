#include "prime_factors.h"
#include <iostream>
#include <vector>

int main() {
    std::cout << "Enter number to find its prime factors: ";
    int num; std::cin >> num;

    std::vector<int> result = prime_factors::of(num);

    std::cout << "Prime factors: ";
    for(auto each_element = result.begin(); each_element != result.end(); each_element++) {
        std::cout << *each_element << " ";
    }
    std::cout << std::endl;

    return 0;
}
