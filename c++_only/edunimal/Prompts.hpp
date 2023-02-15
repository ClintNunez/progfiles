// TODO 
// make a prompt for searching more in the current animal, switching animal or exit. (this happens after successfuly searching a term in the current animal)
class Prompts {
    private:
        char animal_choice;
        char continue_choice;

    public:
        Prompts();  // constructor

        void SplashScreen();
        void HomeScreen();
        char Get_Animal_Choice();
        void ContinuePrompt();
        char Get_Continue_Choice();

};
