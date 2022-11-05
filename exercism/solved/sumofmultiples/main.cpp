#include "sum_of_multiples.h"
#include<iostream>
#include<vector>

int main() {
    std::vector<int> multiples;

    std::cout << "Enter number of multiples: ";
    int n; std::cin >> n;
    int element;

    for(int i = 0; i < n; i++) {
        std::cin >> element;     
        multiples.push_back(element);
    }

    std::cout << "Enter limit: ";
    int limit; std::cin >> limit;

    std::cout << sum_of_multiples::to(multiples, limit) << std::endl;
    
    return 0;
}
