#include "Screens.hpp"
#include "Helper.h"
#include <cctype>
#include <iostream>
#include <string>

/*
 * TODO:
 * - add filtering for inputs, since getline is used, check for: length and extract the character at index 0;
 * */

Screens::Screens() {}

void Screens::SplashScreen() {
    std::cout << "House" << std::endl;
    std::cin.ignore();
    helper::CLS();
}

void Screens::HomeScreen() {
    // Add the ascii of EDUNIMALS
    // EDUNIMALS TITLE
    //  DOG CAT BIRD  Exit
    //   a   b   c      e 
    std::cout << "Edunimals hehe" << std::endl;
    std::cout << "Choose your EduAnimal:\n(a)EduDog - (Canines)\n(b)EduCat - (Felines)\n(c)EduBird - (bird?)\n(e)Exit\n>";
    std::getline(std::cin, animal_choice);

    animal_choice = tolower(animal_choice[0]);
}

char Screens::Get_Animal_Choice() {
    return animal_choice[0];
}

void Screens::ContinuePrompt() {
    std::cout << "Continue?[y/n]: ";
    std::cin >> continue_choice;
    continue_choice = tolower(continue_choice[0]);

    while(continue_choice[0] != 'y' && continue_choice[0] != 'n') {
        std::cout << "[y]es or [n]o only: ";
        std::cin >> continue_choice;
        continue_choice = tolower(continue_choice[0]);
    }
}

char Screens::Get_Continue_Choice() {
    return continue_choice[0];
}


