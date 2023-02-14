#include "Prompts.hpp"
#include <cctype>
#include <iostream>
#include <string>

Prompts::Prompts() {}

void Prompts::Home() {
    // Add the ascii of EDUNIMALS
    // EDUNIMALS TITLE
    //  DOG CAT BIRD  Exit
    //   a   b   c      e 
    std::cout << "Edunimals hehe" << std::endl;
    std::cout << "Choose your EduGuide:\n(a)EduDog\n(b)EduCat\n(c)EduBird\n(e)Exit\n>";
    std::cin >> animal_choice;
    animal_choice = tolower(animal_choice);
}

char Prompts::Get_Animal_Choice() {
    return animal_choice;
}

void Prompts::Continue() {
    std::cout << "Continue?[y/n]: ";
    std::cin >> continue_choice;
    continue_choice = tolower(continue_choice);

    while(continue_choice != 'y' && continue_choice != 'n') {
        std::cout << "[y]es or [n]o only: ";
        std::cin >> continue_choice;
        continue_choice = tolower(continue_choice);
    }
}

char Prompts::Get_Continue_Choice() {
    return continue_choice;
}


