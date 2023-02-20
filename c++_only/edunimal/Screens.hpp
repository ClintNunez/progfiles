#ifndef SCREENS_HPP
#define SCREENS_HPP
#include "EduAnimal.hpp"
#include <string>
// TODO 
// make a prompt for searching more in the current animal, switching animal or exit. (this happens after successfuly searching a term in the current animal)
class Screens {
    private:
        std::string animal_choice;
        std::string continue_choice;
        std::string search_Input; // find a better name

    public:
        Screens();  // constructor

        // Screens
        void SplashScreen();
        void HomeScreen();
        void AnimalIntroScreen(char animal_ID);
        void DefinitionScreen(std::string search_Term);
        void InfoScreen(char animal_ID);
        void ContinueScreen();

        // Design?
        void ShowTable(char animal_ID);
    
        char Get_Animal_Choice();
        char Get_Continue_Choice();

};

#endif
