#include "EduAnimal.hpp"
#include <iostream>
#include <string>
#include <time.h>

EduAnimal::EduAnimal() {
    srand(time(0));
}

void EduAnimal::Display(std::string pattern) {
    while(pattern.length() != 0) {
        std::cout << pattern.substr(0, pattern.find_first_of('#')) << std::endl;
        pattern = pattern.substr(pattern.find_first_of('#') + 1, pattern.length() - pattern.find_first_of('#'));
    }
}

void EduAnimal::Greetings(std::vector<std::string> animal_Sounds) {
    std::cout<< "Good day! " << animal_Sounds.at(rand() % animal_Sounds.size()) << std::endl;
}

EduDog::EduDog() {}

void EduDog::Display() {
    EduAnimal::Display(DOG_PATTERN);
}

void EduDog::Greetings() {
    return EduAnimal::Greetings(DOG_BARKS);
}

EduCat::EduCat() {}

void EduCat::Display() {
    EduAnimal::Display(CAT_PATTERN);
}

void EduCat::Greetings() {
    return EduAnimal::Greetings(CAT_MEOWS);
}

EduBird::EduBird() {}

void EduBird::Display() {
    EduAnimal::Display(BIRD_PATTERN);
}

void EduBird::Greetings() {
    return EduAnimal::Greetings(BIRD_TWEETS);
}
