#include "largest_series_product.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using std::cout; using std::endl;
using std::ifstream; using std::getline;
using std::string; using std::stoi;
using std::domain_error;

int main() {
    ifstream input("input.in");
    string line, number;
    int num_of_inputs, substr_len, expected_res, actual_res;
    try{
        getline(input, line);
        num_of_inputs = stoi(line);

        for(int i = 0; i < num_of_inputs; i++) {
            getline(input, line);
            number = line;
            getline(input, line);
            substr_len = stoi(line);
            getline(input, line);
            expected_res = stoi(line);

            actual_res = largest_series_product::largest_product(number, substr_len);

            cout << "expected: " << expected_res << " actual: " << actual_res << endl; 
        }

    } catch(domain_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
