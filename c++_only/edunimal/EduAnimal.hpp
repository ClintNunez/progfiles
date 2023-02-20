#ifndef EDUNIMAL_HPP
#define EDUNIMAL_HPP
#include <string>
#include <vector>

class EduAnimal {
    private:
        std::string given_name; 
        
    public:
        EduAnimal();
        void Display(std::string pattern);
        void Greetings(std::vector<std::string> animal_Sounds);
        std::string AskForName(std::vector<std::string> animal_Sounds, char animal_ID);
        std::string GetName(); // get the name from file for checking if the current animal is already named
};

class EduDog : public EduAnimal {

    private:
        const std::string DOG_PATTERN = "  ___#(|. .|)# ((Y))# ()_()_/#";
        const std::vector<std::string> DOG_BARKS = {"Bark.", "Bark Bark.", "Woof.", "Woof Woof.", "Arf.", "Arf Arf."};
        std::string given_name;

    public:
        EduDog();
    
        void Display(); 
        void Greetings();
        void AskForName(char animal_ID);
        std::string GetName();
};

class EduCat : public EduAnimal {

    private: 
        const std::string CAT_PATTERN = " ^___^#(='x'=)# ()_()_/#";
        const std::vector<std::string> CAT_MEOWS = {"Meow.", "Meow Meow.", "Nyaa.", "Nyaa Nyaa."};
        std::string given_name;

    public:
        EduCat();

        void Display(); 
        void Greetings();
        void AskForName(char animal_ID);
        std::string GetName();
};

class EduBird : public EduAnimal {

    private: 
        const std::string BIRD_PATTERN = " ___#('v')#((_))# ^ ^#";
        const std::vector<std::string> BIRD_TWEETS = {"Tweet.", "Tweet Tweet."};
        std::string given_name;

    public:
        EduBird();

        void Display(); 
        void Greetings();
        void AskForName(char animal_ID);
        std::string GetName();
};

static struct {
    EduDog eduDog;
    EduCat eduCat;
    EduBird eduBird;
} EduAnimals;

#endif
