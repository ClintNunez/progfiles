// TODO explain
#include <iostream>
#include <vector>

typedef std::vector<int> vectorInt;
typedef std::vector<int> *pVectorInt;

// Selection sort finds the smallest number from the unsorted list and puts it to a new list while also removing that number from the unsorted list. 
pVectorInt Selection_Sort(pVectorInt pUnsorted_Vector, pVectorInt pSorted_Vector) {

    if(!pUnsorted_Vector->empty()) {
        int smallest, index;

        while(!pUnsorted_Vector->empty()) {
            // initialize values for comparison
            smallest = pUnsorted_Vector->at(0);
            index = 0;

            // checks elements from index 1 to pUnsorted_Vector->size() - 1 if each of them is less than the element at index 0
            // if the current element is less than the element at index 0 then replace the value of smallest to the current element
            // and the value of index to the value of i
            for(int i = 1; i < pUnsorted_Vector->size(); i++) {
                if(pUnsorted_Vector->at(i) <= smallest) {
                    smallest = pUnsorted_Vector->at(i);
                    index = i;
                }
            }

            // use the value of index to erase the current smallest element in the vector
            pUnsorted_Vector->erase(pUnsorted_Vector->begin() + index);

            pSorted_Vector->push_back(smallest);
        }

    } else {
        std::cout << "Empty" << std::endl;
    }

    return pSorted_Vector;
}

int main() {
    vectorInt unsorted_vector = { 5, 4, 6, 3, 1, 2, 3, 1, 5, 7 };
    vectorInt sorted_vector;

    pVectorInt pUnsorted_Vector = &unsorted_vector;
    pVectorInt pSorted_Vector = &sorted_vector;
    
    pSorted_Vector = Selection_Sort(pUnsorted_Vector, pSorted_Vector);

    for(int i = 0; i < sorted_vector.size(); i++) {
        // find other ways
        std::cout << sorted_vector.at(i) << " ";
    }

    return 0;
}
