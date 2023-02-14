#include "AnimalGuide.hpp"
#include <iostream>

AnimalGuide::AnimalGuide() {}

void AnimalGuide::Display(std::string pattern) {
    while(pattern.length() != 0) {
        std::cout << pattern.substr(0, pattern.find_first_of('#')) << std::endl;
        pattern = pattern.substr(pattern.find_first_of('#') + 1, pattern.length() - pattern.find_first_of('#'));
    }
}

void AnimalGuide::Greetings(std::string greetings) {
    std::cout << greetings << std::endl;
}

EduDog::EduDog() {}

void EduDog::Display() {
    AnimalGuide::Display(DOG_PATTERN);
}

void EduDog::Greetings() {
    AnimalGuide::Greetings(DOG_GREETINGS);
}

EduCat::EduCat() {}

void EduCat::Display() {
    AnimalGuide::Display(CAT_PATTERN);
}

void EduCat::Greetings() {
    AnimalGuide::Greetings(CAT_GREETINGS);
}

EduBird::EduBird() {}

void EduBird::Display() {
    AnimalGuide::Display(BIRD_PATTERN);
}

void EduBird::Greetings() {
    AnimalGuide::Greetings(BIRD_GREETINGS);
}
