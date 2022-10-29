#include "allergies.h"
#include<iostream>
#include<string>

int main() {
    std::cout << "Enter allergy score: ";
    int allergyScore; std::cin >> allergyScore;

    std::string result = allergies::result(allergyScore);

    std::cout << result << std::endl;

    return 0;
}
