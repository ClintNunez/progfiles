#include "hexadecimal.h"
#include <fstream>
#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string; using std::getline;
using std::stoi;
using std::ifstream;

int main() {
    ifstream input("input.in");

    if(!input.is_open()) {
        cout << "input.in not found." << endl;
        return 0;
    }

    string line;
    getline(input, line);

    int ctr = stoi(line);
    
    while(ctr--) {
        getline(input, line);

        cout << "Decimal: " << hexadecimal::convert(line) << endl;
    }

    getline(input, line);

    ctr = stoi(line);

    while(ctr--) {
        getline(input, line);

        cout << "Expected Decimal: " << line << endl;
    }
    

    return 0;
}
