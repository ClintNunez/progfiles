#include "pascals_triangle.h"
#include <iostream>
#include <vector>

int main() {
    std::cout << "Enter rows for pascal's triangle: ";
    int rows; std::cin >> rows;

    std::vector<std::vector<int>> result = pascals_triangle::generate_rows(rows);

    std::vector<std::vector<int>>::iterator each_row;
    for(each_row = result.begin(); each_row != result.end(); each_row++) {
        std::vector<int> row = *each_row;
        std::cout << "{";
        for(std::vector<int>::iterator each_element = row.begin(); each_element != row.end(); each_element++) {
            std::cout << *each_element << ", ";
        }
        std::cout << "}," << std::endl;
    }

    return 0;
}
