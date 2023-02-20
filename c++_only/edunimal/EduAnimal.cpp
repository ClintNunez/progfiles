#include "EduAnimal.hpp"
#include "Helper.h"
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
    std::cout<< "Good day! " << animal_Sounds.at(rand() % animal_Sounds.size()) << ".\n";
}

std::string EduAnimal::AskForName(std::vector<std::string> animal_Sounds, char animal_ID) {
    /* Insert code for getting the name from file*/
    given_name = helper::GetNameFromFile(animal_ID);
    
    if(given_name == "no_name") {
        std::cout << "Please give me a name: " << animal_Sounds.at(rand() % animal_Sounds.size()) << ".\n";
        std::getline(std::cin, given_name);

        // check if given_name contains special characters and numbers 
        /* Insert code for saving the name */
    } else {
        std::cout << "My name is " << given_name << ".\n";
    }     
    
    return given_name;
}

EduDog::EduDog() {};

void EduDog::Display() {
    EduAnimal::Display(DOG_PATTERN);
}

void EduDog::Greetings() {
    EduAnimal::Greetings(DOG_BARKS);
}

void EduDog::AskForName(char animal_ID) {
    given_name = EduAnimal::AskForName(DOG_BARKS, animal_ID);
}

std::string EduDog::GetName() {
    return given_name;
}

EduCat::EduCat() {}

void EduCat::Display() {
    EduAnimal::Display(CAT_PATTERN);
}

void EduCat::Greetings() {
    EduAnimal::Greetings(CAT_MEOWS);
}

void EduCat::AskForName(char animal_ID) {
    given_name = EduAnimal::AskForName(CAT_MEOWS, animal_ID);
}

std::string EduCat::GetName() {
    return given_name;
}

EduBird::EduBird() {}

void EduBird::Display() {
    EduAnimal::Display(BIRD_PATTERN);
}

void EduBird::Greetings() {
    EduAnimal::Greetings(BIRD_TWEETS);
}

void EduBird::AskForName(char animal_ID) {
    given_name = EduAnimal::AskForName(BIRD_TWEETS, animal_ID);
}

std::string EduBird::GetName() {
    return given_name;
}
