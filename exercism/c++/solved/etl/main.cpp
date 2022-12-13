#include "etl.h"
#include <iostream>
#include <vector>
#include <map>

int main() {
    const std::map<int, std::vector<char>> old{
        {1, {'A', 'E', 'I', 'O', 'U', 'L', 'N', 'R', 'S', 'T'}},
        {2, {'D', 'G'}},
        {3, {'B', 'C', 'M', 'P'}},
        {4, {'F', 'H', 'V', 'W', 'Y'}},
        {5, {'K'}},
        {8, {'J', 'X'}},
        {10, {'Q', 'Z'}}
    };

    const std::map<char, int> new_value = etl::transform(old);

    for(auto each_element = new_value.begin(); each_element != new_value.end(); each_element++) {
        std::cout << each_element->first << " " << each_element->second << std::endl;
    }
    
    return 0;
}
