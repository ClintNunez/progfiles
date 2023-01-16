#include <iostream>
#include <vector>

// Binary search divides the list of elements until it finds the data that it is looking for
// Meaning that each iteration, the size of the list gets smaller and smaller until there is only one element
// on the list. If the remaining element is equal to the data being searched then it is on the list, else it
// is not on the list.

// Recursive implementation of binary search
int Recursive_Binary_Search(std::vector<int> data, int num_to_find) {

    int midpoint;
    if(data.size() == 0) {
        return -1;
    } else {
        midpoint = data.size() / 2; 

        if(data.at(midpoint) == num_to_find) {
            return midpoint;
        } else if(data.at(midpoint) < num_to_find){
            std::cout << "remove first reached" << std::endl;
            data.erase(data.begin(), data.begin() + midpoint);
            Recursive_Binary_Search(data, num_to_find);
        } else {
            std::cout << "remove first reached" << std::endl;
            data.erase(data.begin() + midpoint, data.end());
            Recursive_Binary_Search(data, num_to_find);
        }
    }
    
    // returns -1 if not found
    return -1; // 1
}
// Computation: 
// time complexity = 3 + log sub 2 n + 1 + 1 + 1 + 1 + 1 + 1 + 1 = log sub 2 + 8, O(log n) Logarithmic time

int main() {
    std::vector<int> data = { 1, 2, 3, 4, 5, 6 };

    for(int each_element : data) 
        std::cout << each_element << " ";
    
    std::cout << std::endl;

    std::cout << "Enter num to find: ";
    int num_to_find; std::cin >> num_to_find;

    int result = Recursive_Binary_Search(data, num_to_find);

    if(result != -1) 
        std::cout << "Number found at index " << result << std::endl;
    else 
        std::cout << "Number not found" << std::endl;

    return 0;
}
