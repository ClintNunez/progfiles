#include <iostream>
#include <vector>

// Recursive implementation of binary search
// the body of the function run at constant time except for the functoin itself which runs at log sub 2 n
int Recursive_Binary_Search(std::vector<int> data, int &num_to_find, int &midpoint) { // log sub 2 n

    if(data.size() == 0) {
        return -1; 
    } else {
        midpoint = data.size() / 2;

        if(data.at(midpoint) == num_to_find) {
            return midpoint;
        } else if(data.at(midpoint) < num_to_find){
            if(data.size() != 1) {
                data.erase(data.begin(), data.begin() + midpoint);
            } else {
                return Recursive_Binary_Search(data, num_to_find, midpoint);
            }
        } else {
            if(data.size() != 1) {
                data.erase(data.begin() + midpoint, data.end());
            } else {
                return Recursive_Binary_Search(data, num_to_find, midpoint);
            }
        }
    }

    // will not be reached, here for removing the warning
    return -2;
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
    int midpoint;

    int result = Recursive_Binary_Search(data, num_to_find, midpoint);
    std::cout << "result: " << result << std::endl;

    if(result != -1) 
        std::cout << "Number found at index " << result << std::endl;
    else 
        std::cout << "Number not found" << std::endl;

    return 0;
}
