#include <iostream>
#include <vector>

// Recursive implementation of binary search. Returns true or false if found
// the body of the function run at constant time except for the functoin itself which runs at log sub 2 n
bool Recursive_Binary_Search(std::vector<int> data, int &num_to_find, int &midpoint) { // log sub 2 n

    if(data.size() == 0) {
        return false; 
    } else {
        midpoint = data.size() / 2;

        if(data.at(midpoint) == num_to_find) {
            return true;
        } else if(data.at(midpoint) < num_to_find){
            if(data.size() != 1) {
                data.erase(data.begin(), data.begin() + midpoint);
                return Recursive_Binary_Search(data, num_to_find, midpoint);
            } else {
                return Recursive_Binary_Search(data, num_to_find, midpoint);
            }
        } else {
            if(data.size() != 1) {
                data.erase(data.begin() + midpoint, data.end());
                return Recursive_Binary_Search(data, num_to_find, midpoint);
            } else {
                return Recursive_Binary_Search(data, num_to_find, midpoint);
            }
        }
    }

    // will not be reached, here for removing the warning
    return false;
}
// Computation: 
// time complexity = 3 + log sub 2 n + 1 + 1 + 1 + 1 + 1 + 1 + 1 = log sub 2 + 8, O(log n) Logarithmic time

// Recursive implementation of Binary search that returns the index of the element
int Recursive_Binary_Search_Index(std::vector<int> data, int &num_to_find, int &midpoint, int &first, int &last) {
    if(data.size() == 0) {
        return -1;
    } else {
        midpoint = (first + last) / 2;

        if(data.at(midpoint) == num_to_find) {
            return midpoint;
        } else if(data.at(midpoint) < num_to_find) {
            first = midpoint + 1;
            return Recursive_Binary_Search_Index(data, num_to_find, midpoint, first, last);
        } else {
            last = midpoint - 1;
            return Recursive_Binary_Search_Index(data, num_to_find, midpoint, first, last);
        }
    }

    // will not be reached, here for removing the warning
    return -1;
}

int main() {
    std::vector<int> data = { 1, 2, 3, 4, 5, 6 };

    for(int each_element : data) 
        std::cout << each_element << " ";
    
    std::cout << std::endl;

    std::cout << "Enter num to find: ";
    int num_to_find; std::cin >> num_to_find;
    int midpoint;

    bool result = Recursive_Binary_Search(data, num_to_find, midpoint);

    if(result) 
        std::cout << "Number found" << std::endl;
    else 
        std::cout << "Number not found" << std::endl;

    int first = 0, last = data.size() - 1;
    int index_result = Recursive_Binary_Search_Index(data, num_to_find, midpoint, first, last); 
    
    if(index_result != -1) {
        std::cout << "Number found " << index_result << std::endl;
    } else {
        std::cout << "Number not found" << std::endl;
    }

    return 0;
}
