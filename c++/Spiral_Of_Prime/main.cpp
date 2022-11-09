#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// CURRENT TODO
// Use logic from spiral of prime by coding train for identifying prime numbers
// Make the matrix size * 3 example: dimension is 3,    _ 1 _ | _ 2 _ | _ 3 _ | _ 1 _ | _ 2 _ | _ 3 _ | _ 1 _ | _ 2 _ | _ 3 _
// Make a function to see the prime numbers or the dots

// FINISHED TODO

// getting prime numbers
vector<bool> primes;
void SieveOfEratosthenes(int n) { // Time Complexity: O(n*log(log(n)))
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for(int i = 0; i < n - 1; i++) { // removes one since 1 is not a prime number
        primes.push_back(true);
    }

    for(int p = 2; p * p <= n; p++) {
        if(primes.at(p)) {
            for(int i = p*p; i <= n; i += p) {
                primes.at(i) = false;
            }
        }
    }

}

// create the matrix
vector<vector<char>> m;

void createMatrix(int D) {
    for(int i = 0; i < D * 3; i++) {
        vector<char> row;
        for(int j = 0; j < D * 3; j++) {
            row.push_back(' ');
        }
        m.push_back(row);
    }
}

// create spiral
void createSpiral(int D) {
    int x, y, direction = 0, repeat = 2, nDim = D * 3;

    if(D % 2 == 0) {
        x = (D / 2) + 1; y = (D / 2) + 1;
    } else {
        x = D / 2; y = D / 2;
    }

    for(int step = 1; step < D; step++) { // loop for number of steps
        if(step == (D - 1)) repeat  = 3;
        for(int j = 0; j < repeat; j++) { // loop for repeating the steps
            for(int k = 0; k < (step * 3); k++)  { // loop for moving i number of steps
                switch(direction) {
                    case 0:
                        // move up
                        if(k % 3 == 0) {
                            // check if it is prime
                            // if prime set '@' else set '|'
                        } else {
                            // assign '|'
                        }
                        break;
                    case 1:
                        // move left
                        if(k % 3 == 0) {
                            // check if it is prime
                            // if prime set '@' else set '|'
                        } else {
                            // assign '-'
                        }
                        break;
                    case 2:
                        // move down
                        if(k % 3 == 0) {
                            // check if it is prime
                            // if prime set '@' else set '|'
                        } else {
                            // assign '|'
                        }
                        break;
                    case 3:
                        // move right
                        if(k % 3 == 0) {
                            // check if it is prime
                            // if prime set '@' else set '|'
                        } else {
                            // assign '-'
                        }
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
    int numStep; cin >> numStep;
    int dimension = numStep * 3;

   return 0;
}
