#include "EduAnimal.hpp"
#include <iostream>

EduAnimal::EduAnimal() {}

void EduAnimal::Display(std::string pattern) {
    while(pattern.length() != 0) {
        std::cout << pattern.substr(0, pattern.find_first_of('#')) << std::endl;
        pattern = pattern.substr(pattern.find_first_of('#') + 1, pattern.length() - pattern.find_first_of('#'));
    }
}

void EduAnimal::Greetings(std::string greetings) {
    std::cout << greetings << std::endl;
}

EduDog::EduDog() {}

void EduDog::Display() {
    EduAnimal::Display(DOG_PATTERN);
}

void EduDog::Greetings() {
    EduAnimal::Greetings(DOG_GREETINGS);
}

EduCat::EduCat() {}

void EduCat::Display() {
    EduAnimal::Display(CAT_PATTERN);
}

void EduCat::Greetings() {
    EduAnimal::Greetings(CAT_GREETINGS);
}

EduBird::EduBird() {}

void EduBird::Display() {
    EduAnimal::Display(BIRD_PATTERN);
}

void EduBird::Greetings() {
    EduAnimal::Greetings(BIRD_GREETINGS);
}
