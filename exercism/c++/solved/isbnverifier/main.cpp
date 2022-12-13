#include "isbn_verifier.h"
#include <iostream>
#include <fstream>
#include <string>

using std::cout; using std::endl;
using std::ifstream; using std::getline;
using std::string;

int main() {
    ifstream input("input.in");

    if(!input.is_open()) {
        cout << "input.in not found." << endl;
        return 0;
    }

    string line;
    int ctr = 0; // for getting number of isbn inputs
    while(getline(input, line)) {
        if(line != "%") {
            cout << ((isbn_verifier::is_valid(line)) ? "Valid" : "Invalid") << endl;
            ctr++;
        } else {
            while(ctr--) {
                getline(input,line);
                cout << line << endl;
            }
        }
    }

    return 0;
}
