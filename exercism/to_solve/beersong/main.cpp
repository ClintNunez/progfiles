#include "beer_song.h"
#include <iostream>
#include <fstream>
#include <string>

using std::getline; using std::ifstream;
using std::cout; using std::endl;
using std::string; using std::stoi;


int main() {
    ifstream input("input.in");

    if(input.is_open()) {
        string res, line;
        while(getline(input, line)) {
            if(line[0] == 'v')
                cout << beer_song::verse(int(line[2]-48));
            else if(line[0] == 's')
                cout << beer_song::sing(int(line[2]-48), int(line[4]-48));
        }
    } else { 
        cout << "input.in not found." << endl;
    }

    return 0;
}
