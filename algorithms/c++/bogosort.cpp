#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>

// check yt video for no return value for a function with a data type
// data -> &data
bool is_sorted(std::vector<int> data) {
    for(int i = 0; i < data.size() - 1; i++) {
        if(data.at(i) > data.at(i + 1)) {
            return false;
        }
    }
    return true; 
}

// turn to void and make data -> &data
std::vector<int> bogosort(std::vector<int> data) {
    // seed
    srand(unsigned(time(NULL)));
    int random_index1, random_index2, temp;

    while(!is_sorted(data)) {
        random_index1 = 1 + (rand() % data.size() - 1);
        random_index2 = 1 + (rand() % data.size() - 1);

        temp = data.at(random_index1);
        data.at(random_index1) = data.at(random_index2);
        data.at(random_index2) = temp;
    }

    return data;
}

int main() {
    std::vector<int> data = { 2, 3, 1 };

    for(int element : data) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    std::vector<int> result = bogosort(data);

    for(int element : result) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
