#include "secret_handshake.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Enter decimal for secret handshake: ";
    int decimal; std::cin >> decimal;

    std::vector<std::string> result = secret_handshake::commands(decimal);
        
    std::vector<std::string>::iterator each_element;
    for(each_element = result.begin(); each_element != result.end(); each_element++) {
        std::cout << *each_element << std::endl;
    }

    return 0;
}
