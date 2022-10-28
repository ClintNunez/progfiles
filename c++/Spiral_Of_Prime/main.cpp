#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// getting prime numbers
void SieveOfEratosthenes(int n) { // Time Complexity: O(n*log(log(n)))
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p * p <= n; p++) {
        if(prime[p]) {
            for(int i = p*p; i <= n; i += p) {
                prime[p] = false;
            }
        }
    }
}

// create the matrix
vector<vector<char>> m;
//for(vector<char>::iterator itr == m.begin(); itr != m.end(); itr++) {
    //memset(*itr, ' ', sizeof(*itr));
//}
void createMatrix(int D) {
    int x, y, direction = 0, repeat = 2, nDim = D * 3;

    if(D % 2 == 0) {
        x = (D / 2) + 1; y = (D / 2) + 1;
    } else {
        x = D / 2; y = D / 2;
    }

    for(int step = 1; step < D; step++) { // loop for number of steps
        if(step == (D - 1)) repeat  = 3;
        for(int j = 0; j < repeat; j++) { // loop for repeating the steps
            for(int k = 0; k < step; k++)  { // loop for moving i number of steps
                switch(direction) {
                    case 0:
                        // move up
                        break;
                    case 1:
                        // move left
                        break;
                    case 2:
                        // move down
                        break;
                    case 3:
                        // move right
                        break;

                }
                
                direction = (direction == 3) ? 0 : direction++; // check

            }
            
        }

    }
    
}

// print matrix
void printSpiral() {
    // change to normal for loop since for each is slow
    for(vector<char> eachVector: m) {
        for(char element: eachVector) {
            // print using iomanipulators
            cout << element << " ";
        }
    }
}

int main() {
    cout << "Enter dimensions of matrix: ";
    int D; cin >> D;

    SieveOfEratosthenes(D * D);
    createMatrix(D);
   
   return 0;
}
