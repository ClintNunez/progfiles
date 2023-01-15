#include <iostream>
#include <vector>

// Linear search looks for the data it needs to find by comparing it to each element of the list
// starting from the first element to the last element. If the current element is equal to the data
// it is looking then it is on the list, else it is not on the list
int linear_search(std::vector<int> data, int &element_to_find) {

    // loops n number of times, where n is the size of data.
    for(int i = 0; i < data.size(); i++) { // n
        // compare the current elemnet at index i to element_to_find. If it is equal then return i
        if(data.at(i) == element_to_find) // 1
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
