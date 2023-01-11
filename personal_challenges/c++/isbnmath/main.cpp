#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream isbn_input("isbn.txt");
    string isbn;

    int size;
    int sumto12digit;
    int d13;
    int computed_d13;

    while(getline(isbn_input, isbn)) {
        if(isbn == "c") {
            for(int i = 0; i < 2; i++) {
                getline(isbn_input, isbn);
                
                cout << "13 digit isbn check if valid: " << endl;
                size = isbn.size();
                sumto12digit = 0;
                d13 = (int)isbn[12] - '0';
                computed_d13 = 0;
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
            }
        } else if(isbn == "f"){
            for(int i = 0; i < 2; i++) {
                getline(isbn_input, isbn);

                cout << "12 digit isbn find check digit: " << endl;
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
            }
        }
    }
    cout << endl;

    ifstream upc_input("upc.txt");
    string upc;

    int sumto11digit;
    int d12;
    int computed_d12;
    while(getline(upc_input, upc)) {
        if(upc == "c") {
            getline(upc_input, upc);
        
            cout << "12 digit upc check if valid: " << endl;

            size = upc.size();
            sumto11digit = 0;
            d12 = (int)upc[11] - '0';
            computed_d12 = 0;
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
        } else if(upc == "f"){
            getline(upc_input, upc);

            cout << "11 digit upc find check digit: " << endl;

            size = upc.size();
            sumto11digit = 0;
            computed_d12 = 0;
            for(int i = 1; i <= size; i++) {
                if(i % 2 != 0) 
                    sumto11digit += 3 * ((int)upc[i - 1] - '0');
                else
                    sumto11digit += (int)upc[i - 1] - '0';
            }

            computed_d12 = 10 - (sumto11digit % 10);
            cout << "last/check digit: " << computed_d12 << endl;
        }
    }


    return 0;
}
