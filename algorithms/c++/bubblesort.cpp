#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> &data) {
    for(int i = 0; i < data.size() - 1; i++) {
        if(data.at(i) > data.at(i + 1)) {
            return false;
        }
    }
    return true;
}

void bubblesort(std::vector<int> &data) {
    int index, temp;
    while(!is_sorted(data)) {
        index = 0;
        while(index < data.size() - 1 && data.at(index) > data.at(index + 1)) {
            temp = data.at(index);
            data.at(index) = data.at(index + 1);
            data.at(index + 1) = temp;
            index++;
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
