// TODO explain
#include <iostream>
#include <vector>

typedef std::vector<int> vectorInt;
// check if i can access the elements of a pointer to an array using '->'

// Selection sort finds the smallest number from the unsorted list and puts it to a new list while also removing that number from the unsorted list. 
vectorInt Selection_Sort(vectorInt unsorted_Vector, vectorInt sorted_vector) {
    if(!unsorted_Vector.empty()) {
        int smallest, index;

        while(!unsorted_Vector.empty()) {
            // initialize values for comparison
            smallest = unsorted_Vector.at(0);
            index = 0;

            for(int i = 1; i < unsorted_Vector.size(); i++) {
                if(unsorted_Vector.at(i) <= smallest) {
                    smallest = unsorted_Vector.at(i);
                    index = i;
                }
            }

            unsorted_Vector.erase(unsorted_Vector.begin() + index);

            sorted_vector.push_back(smallest);
        }

    } else {
        std::cout << "Empty" << std::endl;
    }

    return sorted_vector;
}

int main() {
    vectorInt unsorted_vector = { 5, 4, 6, 3, 1, 2, 3, 1, 5, 7 };
    vectorInt sorted_vector;
    
    sorted_vector = Selection_Sort(unsorted_vector, sorted_vector);

    for(int i = 0; i < sorted_vector.size(); i++) {
        // find other ways
        std::cout << sorted_vector.at(i) << " ";
    }

    return 0;
}
