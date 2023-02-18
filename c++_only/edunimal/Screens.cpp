#include "Screens.hpp"
#include "EduAnimal.hpp"
#include "Helper.h"
#include <cctype>
#include <iostream>
#include <string>

/*
 * TODO:
 * - add filtering for inputs, since getline is used, check for: length and extract the character at index 0;
 * - SplashScreen Should use delay and not ignore()
 * */

Screens::Screens() {}

void Screens::SplashScreen() {
    helper::CLS();
    std::cout << "House" << std::endl;
    std::cin.ignore();
}

void Screens::HomeScreen() {
    // Add the ascii of EDUNIMALS
    // EDUNIMALS TITLE
    //  DOG CAT BIRD  Exit
    //   a   b   c      e 
    do {
        helper::CLS();
        std::cout << "Edunimals hehe" << std::endl;
        std::cout << "Choose your EduAnimal:\n(1)EduDog - (Canines)\n(2)EduCat - (Felines)\n(3)EduBird - (bird?)\n(4)Exit\n>";
        std::getline(std::cin, animal_choice);

        if(animal_choice.length() > 1 || animal_choice[0] < '1' || animal_choice[0] > '4') {
            std::cout << "Choice is not within the given options. Press [Enter] to redo." << std::endl;
            std::cin.ignore();
        } else {
            break;
        }

    } while(true);
}

char Screens::Get_Animal_Choice() {
    return animal_choice[0];
}

void Screens::DefinitionScreen(std::string search_Term) {
    // this will display the definition and will use the file searching function from the helper class
    helper::CLS();
    std::cout << search_Term << std::endl;
}

void Screens::InfoScreen(char animal_ID) {
    helper::CLS();
    // Show table
    std::cout << "Table" << std::endl;

    switch(animal_ID) {
        case '1':
            EduAnimals.eduDog.Display();
            EduAnimals.eduDog.Greetings();
            break;
        case '2':
            EduAnimals.eduCat.Display();
            EduAnimals.eduCat.Greetings();
            break;
        case '3':
            EduAnimals.eduBird.Display();
            EduAnimals.eduBird.Greetings();
            break;
    }

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


