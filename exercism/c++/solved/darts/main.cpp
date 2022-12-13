#include "darts.h"
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
        cout << "input.in not found" << endl;
        return 0;
    }
        
    string line;
    getline(input, line);

    int ctr = stoi(line), space_pos;
    double x, y;

    while(ctr--) {
        getline(input, line);

        space_pos = line.find(' ');

        x = stoi(line.substr(0, int(line.size()) - space_pos));
        y = stoi(line.substr(space_pos + 1, int(line.size()) - space_pos));
        
        cout << "Score: " << darts::score(x, y) << endl;
    }

    getline(input, line);

    ctr = stoi(line);

    while(ctr--) {
        getline(input, line);

        cout << "Expected Score: "<< line << endl;
    }


    return 0;
}

