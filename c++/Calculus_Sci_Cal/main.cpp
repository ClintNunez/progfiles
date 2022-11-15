#include <iostream>
#include <math.h>

// CURRENT TODO
// TODO separate code into functions
// TODO add proper prompts
// TODO add table of trigonometric values
// TODO add conversion option after computing trigonometric functions

// FINISHED TODO
//

const double PI = 3.14159265;

void Degree_Trigonometric_Functions() {
    std::cout << "\tTrigonometric Functions in Degrees" << std::endl;
    std::cout << "\tEnter degrees: "; 
    double degrees; std::cin >> degrees;
    degrees = degrees * PI / 180.0;
    std::cout << "\t\tsin: " << sin(degrees) << std::endl;
    std::cout << "\t\tcos: " << cos(degrees) << std::endl;
    std::cout << "\t\ttan: " << tan(degrees) << std::endl;
    std::cout << "\t\tcsc: " << 1/sin(degrees) << std::endl;
    std::cout << "\t\tsec: " << 1/cos(degrees) << std::endl;
    std::cout << "\t\tcot: " << 1/tan(degrees) << std::endl;
}

void Radians_Trigonometric_Functions() {
    std::cout << "\tTrigonometric Functions in Radians" << std::endl;
    std::cout << "\tEnter degrees: "; 
    double radians; std::cin >> radians;
    std::cout << "\t\tsin: " << sin(radians) << std::endl;
    std::cout << "\t\tcos: " << cos(radians) << std::endl;
    std::cout << "\t\ttan: " << tan(radians) << std::endl;
    std::cout << "\t\tcsc: " << 1/sin(radians) << std::endl;
    std::cout << "\t\tsec: " << 1/cos(radians) << std::endl;
    std::cout << "\t\tcot: " << 1/tan(radians) << std::endl;
}

void Arc_Length(double r, double t) {
    /*Insert code*/ 
}

void Area_of_Sector(double r, double t) {
    /*Insert code*/ 
}

void Convert_Radians_To_Degrees(double radians) {
    /*Insert code*/ 
}

void Convert_Degrees_To_Radians(double degrees) {
    /*Insert code*/ 
}

void Choice_Prompt() {
    std::cout << "=======================================================" << std::endl;
    std::cout << "\tChoose what to calculate: " << std::endl;
    std::cout << "\t(1) Trigonometric Functions in Degrees" << std::endl;
    std::cout << "\t(2) Trigonometric Functions in Radians" << std::endl;
    std::cout << "\t(3) Arc Length" << std::endl;
    std::cout << "\t(4) Area of Sector" << std::endl;
    std::cout << "\t(5) Convert Radians to Degrees" << std::endl;
    std::cout << "\t(6) Convert Degrees to Radians" << std::endl;
    std::cout << "\t(0) Exit" << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << "\t> ";
}

int main() {
    int choice;
    char continue_choice;
    bool flag = true;
    std::cout << "\033[2J\033[1;1H";
    do {
        Choice_Prompt();

        while(flag) {
            std::cin >> choice;

            switch(choice) {
                case 0:
                    std::cout << "\tExiting." << std::endl;
                    flag = false;
                    break;
                case 1:
                    Degree_Trigonometric_Functions();
                    flag = false;
                    break;
                case 2:
                    Radians_Trigonometric_Functions();
                    flag = false;
                    break;
                case 3:

                    flag = false;
                    break;
                case 4:

                    flag = false;
                    break;
                case 5:

                    flag = false;
                    break;
                case 6:

                    flag = false;
                    break;
                default:
                    std::cout << "\tInput number that is within the choices.\n\t> "; 
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
            }
        }
        
        flag = !flag;

        if(choice != 0) {
            std::cout << "\n\tContinue[y/n]?\n\t> ";
            std::cin >> continue_choice;
            tolower(continue_choice);
            while(continue_choice != 'y' && continue_choice != 'n') {
                std::cout << "\tPlease enter y/Y or n/N only.\n\t> ";
                std::cin >> continue_choice;
            }

            if(continue_choice == 'y') {
                std::cout << "\033[2J\033[1;1H";
            }
        }

    } while(continue_choice != 'n' && choice != 0);

    return 0;
}
