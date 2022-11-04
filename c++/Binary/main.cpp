#include "custom_binary_converter.h"
#include <iostream>
#include <vector>
#include <string>

// initial solution for getting the binary input (string => each char to int => binary.push_back(each char)

void greeting_text() {
    std::cout << "Custom Binary Converter by Clint Patrick M. Nunez \n" << std::endl;
}



int main(){
    greeting_text();

	 char choice;
    int actionChoice;
	 custom_binary_converter::converter Converter;

    std::string binary;
    int decimal; 

	do{

        std::cout << "What do you want to do?: " << std::endl;
        std::cout << "1) Convert binary to decimal." << std::endl;
        std::cout << "2) Convert decimal to binary." << std::endl;
        std::cin >> actionChoice; 
        std::cout << std::endl;

        switch(actionChoice) {
            case 1: 
                // TODO add a do while loop
                std::cout << "Enter binary: ";
                std::cin >> binary;

                std::cout << "Binary: " << binary << std::endl;
                std::cout << "Decimal: " << Converter.binary_to_decimal(binary) << std::endl;
                break;
            case 2:
                std::cout << "Enter decimal: ";
                std::cin >> decimal;
            
                std::cout << "Decimal: " << decimal << std::endl;
                std::cout << "Binary: " << Converter.decimal_to_binary(decimal) << std::endl;
                break;
        }
        

		std::cout << "Run the again(y/n)? "; // Check if this is better or just use a sentinal value
		std::cin >> choice; // convert it to small case
	     	
		while(choice != 'y' && choice != 'n'){
			std::cout << "Choose between y/n only: ";
			std::cin >> choice;
		}		

	}while(choice != 'n');

    std::cout << "Exiting Custom Binary Converter." << std::endl;

	return 0;
}

