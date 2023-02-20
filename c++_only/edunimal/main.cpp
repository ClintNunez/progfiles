/* Author: Clint Patrick M. Nuez
 * Date created: 01/08/2023
 *
 * New version of edunimals.
 * 
 * Edunimals will now be about animals themselves. Dog for the canine species etc.
 */

/* TODO 
 * - Refactor: from std::endl to '\n'
 * - Use the ascii character art to create the EDUNIMAL Title
 * - Use seek? for finding the right info
 * - FileReader Class
 * - Make a table to know the searchable terms for the user. (Screens.hpp/.cpp)
 * - use delays
 * - Properly use std::cin.ignore()
 *
 * DONE
 * - Learn how to use separate files for the animals class
 * - rename prompts to screens
 */

/*
 * ###Program flow
 * 
 * Splash Screen of the animals (Delay for a bit)
 *
 * ##Main Screen
 * - Get the EduAnimal Choice 
 *
 * ##Show EduAnimal
 * 1 if user did not choose the edu animal previously then the animal will ask a name; "You haven't given me a name yet, please give me one." or something.
 *   if the user already named the animal then mention that the user already gave them one.
 * 2 show the table of contents and the animal below the table asking for questions. make the user type on a text bubble if possible.
 * 3 typing, check for the validity of the word. if it does not match then make an algo for looking for the closest word and say "<input word> not found, providing info for <closest word>"
 * 4 ask the user if they want to search more, change animal or exit; changing animals will go back to the home screen
 *
 * ## Exit
 * - Provide an exit screen;
 */

#include "EduAnimal.hpp"
#include "Screens.hpp"
#include "Helper.h"
#include <iostream>
#include <fstream>

int main() {
    Screens screens;
    EduDog eduDog;
    EduCat eduCat;
    EduBird eduBird;

    screens.SplashScreen();

    while(true) {

        screens.HomeScreen();

        if(screens.Get_Animal_Choice() == '4') {
            screens.SplashScreen();
            return 0;
        } else {
            screens.AnimalIntroScreen(screens.Get_Animal_Choice());

            do {
                screens.InfoScreen(screens.Get_Animal_Choice());
                screens.ContinueScreen();
            } while(screens.Get_Continue_Choice() == '1');
        }

        if(screens.Get_Continue_Choice() == '3') {
            screens.SplashScreen();
            break;
        }
    }

    return 0; 
}
