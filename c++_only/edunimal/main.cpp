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
*
* DONE
* - Learn how to use separate files for the animals class
*/

#include "AnimalGuide.hpp"
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

            prompts.Home();

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

        prompts.Continue();

        if(prompts.Get_Continue_Choice() == 'n') {
            std::cout << "Thank you." << std::endl;
            break;
        }

    }

    return 0; 
}
