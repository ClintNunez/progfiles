#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string isbn;

    cin >> isbn;

    cout << "13 digit isbn check if valid: " << endl;
    int size = isbn.size();
    int sumto12digit = 0;
    int d13 = (int)isbn[12] - '0';
    int computed_d13 = 0;
    for(int i = 1; i <= size - 1; i++) {
        if(i % 2 == 0)
            sumto12digit += 3 * ((int)isbn[i - 1] - '0');
        else
            sumto12digit += (int)isbn[i - 1] - '0';
    }

    computed_d13 = 10 - (sumto12digit % 10);
    
    if(computed_d13 == d13) 
        cout << "valid" << endl;
    else 
        cout << "invalid" << endl;

    cout << "12 digit isbn find check digit: " << endl;
    cin >> isbn;
    size = isbn.size();
    sumto12digit = 0;
    computed_d13 = 0;

    for(int i = 1; i <= size; i++) {
        if(i % 2 == 0)
            sumto12digit += 3 * ((int)isbn[i - 1] - '0');
        else
            sumto12digit += (int)isbn[i - 1] - '0';
    }
    computed_d13 = 10 - (sumto12digit % 10);
    cout << "last/check digit: " << computed_d13 << endl;


    cout << "12 digit upc check if valid: " << endl;
    string upc;
    cin >> upc;
    size = upc.size();
    int sumto11digit = 0;
    int d12 = (int)upc[11] - '0';
    int computed_d12 = 0;
    for(int i = 1; i <= size - 1; i++) {
        if(i % 2 != 0) 
            sumto11digit += 3 * ((int)upc[i - 1] - '0');
        else
            sumto11digit += (int)upc[i - 1] - '0';
    }

    computed_d12 = 10 - (sumto11digit % 10);

    if(computed_d12 == d12) 
        cout << "valid" << endl;
    else 
        cout << "invalid" << endl;

    cout << "11 digit upc find check digit: " << endl;
    cin >> upc;
    size = upc.size();
    sumto11digit = 0;
    computed_d12 = 0;
    for(int i = 1; i <= size - 1; i++) {
        if(i % 2 != 0) 
            sumto11digit += 3 * ((int)upc[i - 1] - '0');
        else
            sumto11digit += (int)upc[i - 1] - '0';
    }
    
    computed_d12 = 10 - (sumto11digit % 10);
    cout << "last/check digit: " << computed_d12 << endl;

    return 0;
}
