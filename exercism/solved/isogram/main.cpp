#include "isogram.h"
#include <iostream>
#include <fstream>
#include <string>

using std::cout; using std::endl;
using std::ifstream; using std::string;



int main() {
    ifstream input("input.in");
    
    if(!input.is_open()) {
        cout << "input.in not found." << endl;
        return 0;
    }

    string line;
    while(getline(input, line)) {
        cout << ((isogram::is_isogram(line)) ? "Is isogram" : "Not isogram") << endl;
    }

    return 0;
}
