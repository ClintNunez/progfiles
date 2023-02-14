#include <string>

class AnimalGuide {
    private:
    
    public:
        AnimalGuide();
        void Display(std::string pattern);
        void Greetings(std::string greetings);
};

class EduDog : public AnimalGuide {

    private:
        const std::string DOG_PATTERN = "  ___#(|. .|)# ((Y))# ()_()_/#";
        const std::string DOG_GREETINGS = "Good day bark.";

    public:
        EduDog();
    
        void Display(); 
        void Greetings();
};

class EduCat : public AnimalGuide {

    private: 
        const std::string CAT_PATTERN = " ^___^#(='x'=)# ()_()_/#";
        const std::string CAT_GREETINGS = "Good day meow.";

    public:
        EduCat();

        void Display(); 
        void Greetings();
};

class EduBird : public AnimalGuide {

    private: 
        const std::string BIRD_PATTERN = " ___#('v')#((_))# ^ ^#";
        const std::string BIRD_GREETINGS = "Good day tweet.";

    public:
        EduBird();

        void Display(); 
        void Greetings();
};
