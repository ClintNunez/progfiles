#include "binary_search.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>

using std::cout; using std::endl;
using std::ifstream; using std::string;
using std::getline; using std::stoi;
using std::vector;

int main() {
    ifstream input("input.in");
    
    if(!input.is_open()) {
        cout << "input.in not found" << endl;
        return 0;
    }

    try{
        vector<int> empty;
        cout << binary_search::find(empty, 1) << endl;
    } catch(std::domain_error& e) {
        cout << e.what() << endl;
    }


    /*
    string line;
    vector<int> data;
    int n, m, find_elem; 
    while(getline(input, line)) {
        n = stoi(line);
        while(n--) {
            getline(input, line);
            data.push_back(stoi(line));
        }

        getline(input, line);
        find_elem = stoi(line);

        try{
            cout << binary_search::find(data, find_elem) << endl;
        } catch(std::domain_error& e) {
            cout << e.what() << endl;
        }
    }
    */

    return 0;
} 
