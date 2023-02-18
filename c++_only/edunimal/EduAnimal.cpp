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

std::string EduAnimal::AskForName(std::vector<std::string> animal_Sounds) {
    std::cout << "Please give me a name. " << animal_Sounds.at(rand() % animal_Sounds.size()) << std::endl;
    std::getline(std::cin, given_name);
    
    return given_name;
}

EduDog::EduDog() {
    /*Get name of dog from file*/
}

void EduDog::Display() {
    EduAnimal::Display(DOG_PATTERN);
}

void EduDog::Greetings() {
    EduAnimal::Greetings(DOG_BARKS);
}

void EduDog::AskForName() {
    given_name = EduAnimal::AskForName(DOG_BARKS);
    // add code for saving the name in file
}

EduCat::EduCat() {
    /*Get name of cat from file*/
}

void EduCat::Display() {
    EduAnimal::Display(CAT_PATTERN);
}

void EduCat::Greetings() {
    EduAnimal::Greetings(CAT_MEOWS);
}

void EduCat::AskForName() {
    given_name = EduAnimal::AskForName(CAT_MEOWS);
    // add code for saving the name in file
}

EduBird::EduBird() {
    /*Get name of bird from file*/
}

void EduBird::Display() {
    EduAnimal::Display(BIRD_PATTERN);
}

void EduBird::Greetings() {
    EduAnimal::Greetings(BIRD_TWEETS);
}

void EduBird::AskForName() {
    given_name = EduAnimal::AskForName(BIRD_TWEETS);
    // add code for saving the name in file
}
