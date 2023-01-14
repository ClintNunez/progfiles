#include <iostream>
#include <vector>

int linear_search(std::vector<int> data, int &element_to_find) {

    // loops n number of times where n is the size of data.
    for(int i = 0; i < data.size(); i++) { // n
        if(data.at(i) == element_to_find) // n
            // returns the index where data.at(i) is equal to element_to_find
            return i; // 1
    }

    // returns -1 if not found
    return -1; // 1
}
// Computation:
// time complexity = n + n + 1 + 1 = 2n + 2, O(n)

int main() {
    std::vector<int> data = { 1, 2, 3, 4, 5, 10 };
    
    for(int each_element : data) 
        std::cout << each_element << ", ";

    std::cout << std::endl;

    std::cout << "find num in list: ";
    int element_to_find; std::cin >> element_to_find;

    int result = linear_search(data, element_to_find);
    if(result != -1) {
        std::cout << "Number found on the list at index " << result << std::endl;
    } else {
        std::cout << "Number not found on the list." << std::endl;
    }

    return 0; 
}
