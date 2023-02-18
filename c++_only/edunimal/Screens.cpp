#include "Screens.hpp"
#include "EduAnimal.hpp"
#include "Helper.h"
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
    helper::Ignore();
}

void Screens::HomeScreen() {
    // Add the ascii of EDUNIMALS
    // EDUNIMALS TITLE
    //  DOG CAT BIRD  Exit
    //   a   b   c      e 
    do {
        helper::CLS();
        std::cout << "Edunimals hehe" << std::endl;
        std::cout << "Choose your EduAnimal:\n(1) EduDog - (Canines)\n(2) EduCat - (Felines)\n(3) EduBird - (bird?)\n(4) Exit\n>";
        std::getline(std::cin, animal_choice);

        if(animal_choice.length() > 1 || animal_choice[0] < '1' || animal_choice[0] > '4') {
            std::cout << "Choice is not within the given options. Press [Enter] to redo." << std::endl;
            helper::Ignore();
        } else {
            break;
        }

    } while(true);
}

char Screens::Get_Animal_Choice() {
    return animal_choice[0];
}

void Screens::AnimalIntroduction(char animal_ID) {
    // this will ask for a name for each animal. if it already exists show the given name of the current animal.
    helper::CLS();

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

    helper::Ignore();

    helper::CLS();

    // Get name from file first and check if current animal is already named else ask for name
    switch(animal_ID) {
        case '1':
            EduAnimals.eduDog.Display();
            EduAnimals.eduDog.AskForName();
            break;
        case '2':
            EduAnimals.eduCat.Display();
            EduAnimals.eduCat.AskForName();
            break;
        case '3':
            EduAnimals.eduBird.Display();
            EduAnimals.eduBird.AskForName();
            break;
    }

}

void Screens::DefinitionScreen(std::string search_Term) {
    // this will display the definition and will use the file searching function from the helper class
    helper::CLS();
    std::cout << search_Term << std::endl;
    helper::Ignore();
}

void Screens::InfoScreen(char animal_ID) {
    helper::CLS();

    switch(animal_ID) {
        case '1':
            EduAnimals.eduDog.Display();
            break;
        case '2':
            EduAnimals.eduCat.Display();
            break;
        case '3':
            EduAnimals.eduBird.Display();
            break;
    }

    // Show table
    std::cout << "Table" << std::endl;

    std::cout << "Enter what you want to search: ";
    std::getline(std::cin, search_Input);

    DefinitionScreen(search_Input);
}

void Screens::ContinueScreen() {
    do {
        helper::CLS();
        std::cout << "Would you like to:\n(1) Search for other info?\n(2) Change your EduAnimal?\n(3) Leave.\n>";
        std::getline(std::cin, continue_choice);

        if(continue_choice.length() > 1 || continue_choice[0] < '1' || continue_choice[0] > '3') {
            std::cout << "Choice is not within the given options. Press [Enter] to redo." << std::endl;
            helper::Ignore();
        } else {
            break;
        }

    } while(true);
}

char Screens::Get_Continue_Choice() {
    return continue_choice[0];
}
