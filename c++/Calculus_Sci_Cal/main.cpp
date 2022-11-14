#include <iostream>
#include <math.h>

// CURRENT TODO
// TODO separate code into functions
// TODO add proper prompts

// FINISHED TODO
//

const double PI = 3.14159265;

int main() {
    int choice;
    do {
        std::cout << "Enter degrees: ";
        double degrees; std::cin >> degrees;
        
        degrees = degrees * PI / 180.0;
    
        std::cout << "sin: " << sin(degrees) << std::endl;
        std::cout << "cos: " << cos(degrees) << std::endl;
        std::cout << "tan: " << tan(degrees) << std::endl;
        std::cout << "csc: " << 1/sin(degrees) << std::endl;
        std::cout << "sec: " << 1/cos(degrees) << std::endl;
        std::cout << "cot: " << 1/tan(degrees) << std::endl;

        std::cout << "Enter 0 to exit: " << std::endl;
        std::cin >> choice;

    } while(choice != 0);

    return 0;
}
