/* Author: Clint Patrick M. Nuez
 * Date created: 01/08/2023
 *
 * New version of edunimals.
 * 
 * Edunimals will now be about animals themselves. Dog for the canine species etc.
 */

/* TODO 
* - Learn to use menus
* - Use the ascii character art to create the EDUNIMAL Title
* - Use seek? for finding the right info
* - FileReader Class
* - Make a table to know the searchable terms for the user. IDK Where to put it.
* - use delays
* - rename prompts to screens
*
* DONE
* - Learn how to use separate files for the animals class
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
#include "Prompts.hpp"
#include <iostream>
#include <fstream>


const std::string CLS = "\033[2J\033[1;1H";

int main() {
    std::cout << "Enter";
    std::cin.ignore(); // allows for pressing any keys
                       
    bool correct_choice;

    Prompts prompts;
    EduDog eduDog;
    EduCat eduCat;
    EduBird eduBird;

    while(true) {

        do {
            correct_choice = true;

            prompts.HomeScreen();

            if(prompts.Get_Animal_Choice() == 'e') {
                std::cout << "Exit" << std::endl;
                return 0;
            } else {

                switch(prompts.Get_Animal_Choice()) {
                    case 'a':
                        eduDog.Display();
                        eduDog.Greetings();
                        break;
                    case 'b':
                        eduCat.Display();
                        eduCat.Greetings();
                        break;
                    case 'c':
                        eduBird.Display();
                        eduBird.Greetings();
                        break;
                    default:
                        std::cout << "Choice is not within the given options. Press [Enter] to redo." << std::endl;
                        correct_choice = false;
                        break;
                }
            }

        } while(!correct_choice);

        prompts.ContinuePrompt();

        if(prompts.Get_Continue_Choice() == 'n') {
            std::cout << "Thank you." << std::endl;
            break;
        }

    }

    return 0; 
}
