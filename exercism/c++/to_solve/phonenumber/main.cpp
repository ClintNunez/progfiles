#include "phone_number.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

using std::cout; using std::endl;
using std::string; using std::getline;
using std::ifstream;

int main() {

    ifstream input("input.in");

    if(!input.is_open()) {
        cout << "input.in not found" << endl;
    }

    string line;
    getline(input, line);

    try{
        const phone_number::phone_number phone(line);
        cout << "string(phone): "<< string(phone) << endl;
        cout << "number: " << phone_number::phone_number(line).number() << endl;
        cout << "area code: " << phone_number::phone_number(line).area_code() << endl;
    }catch(std::domain_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
