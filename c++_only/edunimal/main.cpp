/* Author: Clint Patrick M. Nuez
 * Date created: 01/08/2023
 *
 * New version of edunimals using my current knowledge in c++
 * 
 * Edunimals will now be about animals themselves. Dog for the canine species etc.
 */

#include <functional>
#include <iostream>
#include <fstream>

/* TODO 
 * - Learn how to use separate files for the animals class
 */

const std::string CLS = "\033[2J\033[1;1H";

class AnimalGuide {
    private:
    
    public:
        AnimalGuide() {};

        void Display(std::string pattern) {
            while(pattern.length() != 0) {
                std::cout << pattern.substr(0, pattern.find_first_of('#')) << std::endl;
                pattern = pattern.substr(pattern.find_first_of('#') + 1, pattern.length() - pattern.find_first_of('#'));
            }
        }

        void Greetings(std::string greetings) {
            std::cout << greetings << std::endl;
        }
};

class EduDog : public AnimalGuide {

    const std::string DOG_PATTERN = "  ___#(|. .|)# ((Y))# ()_()_/#";
    const std::string DOG_GREETINGS = "Good day bark.";

    public:
        EduDog() {};

        std::string Get_Pattern() {
            return DOG_PATTERN;
        }

        std::string Get_Greetings() {
            return DOG_GREETINGS;
        }

};


class Prompts {
    public:
        Prompts() {} // constructor
        
        void Introduction() {
            std::cout << "Hello." << std::endl;
        }

};

int main() {
    std::cout << "Enter";
    std::cin.ignore(); // allows for pressing any keys

    Prompts prompts;

    prompts.Introduction();


    EduDog Dog;
    Dog.Greetings(Dog.Get_Greetings());

    Dog.Display(Dog.Get_Pattern());
        

    return 0; 
}
