#include "allergies.h"
#include<iostream>
#include<string>
#include<unordered_set>

int main() {
    std::cout << "Enter allergy score: ";
    int allergyScore; std::cin >> allergyScore;

    allergies::allergy_test score(allergyScore);

    std::unordered_set<std::string> result = score.get_allergies();

    for(std::unordered_set<std::string>::iterator eachElement = result.begin(); eachElement != result.end(); eachElement++) {
        std::cout << *eachElement << " " << std::endl;
    }

    std::cout << "Enter allergy to check: ";
    std::string allergy; std::cin >> allergy;

    if(score.is_allergic_to(allergy)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
