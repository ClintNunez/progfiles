// Note: Binary search requires the list of data to be sorted before doing the search.

#include <iostream>
#include <vector>

// Binary search divides the list of elements until it finds the data that it is looking for
// Meaning that each iteration, the size of the list gets smaller and smaller until there is only one element
// on the list. If the remaining element is equal to the data being searched then it is on the list, else it
// is not on the list.
int Binary_Search(std::vector<int> data, int &num_to_find) {
    int first = 0, last = data.size() - 1, midpoint; // 3
    
    while(first <= last) { // log sub 2 n
        // get the midpoint of the current sub list(array or vector) 
        midpoint = (first + last) / 2; // 1

        if(data.at(midpoint) == num_to_find) // 1
            // returns index of the same element if found
            return midpoint; // 1
        else if(data.at(midpoint) < num_to_find) // 1
            // moves the position of first to midpoint + 1 which removes all the current
            // element including all the elements to it's left
            first = midpoint + 1; // 1
        else  // 1
            // moves the position of last to midpoint - 1 which removes all the current
            // element including all the elements to it's right
            last = midpoint - 1; // 1
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

    int result = Binary_Search(data, num_to_find);

    if(result != -1) 
        std::cout << "Number found at index " << result << std::endl;
    else 
        std::cout << "Number not found" << std::endl;

    return 0;
}
