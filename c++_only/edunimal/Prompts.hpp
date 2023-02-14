
class Prompts {
    private:
        char animal_choice;
        char continue_choice;

    public:
        Prompts();  // constructor

        void Home();
        char Get_Animal_Choice();
        void Continue();
        char Get_Continue_Choice();

};
