#include <iostream>
#include <vector>

// check if sorted ascendingly
bool is_sorted(std::vector<int> &data) {
    for(int i = 0; i < data.size() - 1; i++) {
        if(data.at(i) > data.at(i + 1)) {
            return false;
        }
    }
    return true;
}

// Bubblesort checks if the list of data is sorted. If it is not sorted then it will check the first element if it is greater
// than the next element if you want to sort your data ascendingly. if it is greater than the next element then swap them.
// Then it will move to the next index and check again if it is greater than the next element. It will do this until the second
// to the last element. After passing through the list then it will check again if it is sorted already, if not then repeat
// this process.
// Ex: data = { 4, 1, 5, 3, 2 }
// check if sorted
// iteration 1: 1, 4, 5, 3, 2
// iteration 2: 1, 4, 5, 3, 2
// iteration 3: 1, 4, 3, 5, 2
// iteration 4: 1, 4, 3, 2, 5
// check if sorted
// iteration 1: 1, 3, 4, 2, 5
// iteration 1: 1, 3, 2, 4, 5
// check if sorted
// iteration 1: 1, 2, 3, 4, 5
void bubblesort(std::vector<int> &data) {
    while(!is_sorted(data)) {
        for(int i = 0; i < data.size() - 1; i++) {
            if(data.at(i) > data.at(i + 1)) {
                std::swap(data.at(i), data.at(i + 1));
            }
        }
    }
}

int main() {
    std::vector<int> data = { 2, 3, 1, 4 };

    for(int element : data) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    bubblesort(data);

    for(int element : data) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
