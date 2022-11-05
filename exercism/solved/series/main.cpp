#include "series.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "Enter digits: ";
    std::string digits; std::cin >> digits;

    const std::vector<int> result{series::digits(digits)};

    std::cout << "Digits: ";
    for(auto eachElement = result.cbegin(); eachElement != result.cend(); ++eachElement) {
        std::cout << *eachElement << " ";
    }

    std::cout << std::endl;

    std::cout << "Enter digits: ";
    std::cin >> digits;
    std::cout << "Length of substring: ";
    int substr_length; std::cin >> substr_length;
    
    const std::vector<std::vector<int>> slice_result{series::slice(digits, substr_length)};

    std::cout << "slice_result size: " << slice_result.size() << std::endl;

    std::cout << "Sliced: ";
    for(auto eachRow : slice_result) {
        for(auto eachElement = eachRow.cbegin(); eachElement != eachRow.cend(); ++eachElement) {
            std::cout << *eachElement << " ";
        }        
    
        std::cout << std::endl;
    }
    
    return 0;
}
