#include <iostream>
#include <vector>

int linear_search(std::vector<int> data, int &element_to_find) {

    // loops n number of times, where n is the size of data.
    // and compares each element of data to element_to_find.
    // if the current element is equal to element_to_find then 
    // return the current index.
    // else return -1 in this case
    for(int i = 0; i < data.size(); i++) { // n
        if(data.at(i) == element_to_find) // 1
            // returns the index where data.at(i) is equal to element_to_find
            return i; // 1
    }

    return -1; // 1
}
// Computation:
// time complexity = n + 1 + 1 + 1 = n + 3, O(n) Linear time
//                   or n + 1 + 1 = n + 2

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
