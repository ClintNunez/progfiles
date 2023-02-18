#ifndef EDUNIMAL_HPP
#define EDUNIMAL_HPP
#include <string>
#include <vector>

class EduAnimal {
    private:
    
    public:
        EduAnimal();
        void Display(std::string pattern);
        void Greetings(std::vector<std::string> animal_Sounds);
};

class EduDog : public EduAnimal {

    private:
        const std::string DOG_PATTERN = "  ___#(|. .|)# ((Y))# ()_()_/#";
        const std::vector<std::string> DOG_BARKS = {"Bark.", "Bark Bark.", "Woof.", "Woof Woof.", "Arf.", "Arf Arf."};

    public:
        EduDog();
    
        void Display(); 
        void Greetings();
};

class EduCat : public EduAnimal {

    private: 
        const std::string CAT_PATTERN = " ^___^#(='x'=)# ()_()_/#";
        const std::vector<std::string> CAT_MEOWS = {"Meow.", "Meow Meow.", "Nyaa.", "Nyaa Nyaa."};

    public:
        EduCat();

        void Display(); 
        void Greetings();
};

class EduBird : public EduAnimal {

    private: 
        const std::string BIRD_PATTERN = " ___#('v')#((_))# ^ ^#";
        const std::vector<std::string> BIRD_TWEETS = {"Tweet.", "Tweet Tweet."};

    public:
        EduBird();

        void Display(); 
        void Greetings();
};

static struct {
    EduDog eduDog;
    EduCat eduCat;
    EduBird eduBird;
} EduAnimals;

#endif
