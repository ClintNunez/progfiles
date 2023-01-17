#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>

// check yt video for no return value for a function with a data type
bool is_sorted(std::vector<int> data) {
    for(int i = 0; i < data.size() - 1; i++) {
        if(data.at(i) < data.at(i + 1)) {
            return false;
        }
    }
    return true; 
}

std::vector<int> bogosort(std::vector<int> data) {
    // seed
    srand(unsigned(time(NULL)));
    int random_index;
    std::vector<bool> indexes(data.size(), false);

    while(!is_sorted) {
        random_index = 1 + (rand() % data.size() - 1);

        // maybe use the same logic for binary sort to remove a used index from indexes
        // use swap and another variable to get another random index != the first random index, indexes[random_index] is not false
    



    }


    return data;
}

int main() {

    return 0;
}
