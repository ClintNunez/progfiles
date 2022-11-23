#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// CURRENT TODO
// TODO Use logic from spiral of prime by coding train for identifying prime numbers
// TODO Make the matrix size * 3 example: dimension is 3,    _ 1 _ | _ 2 _ | _ 3 _ | _ 1 _ | _ 2 _ | _ 3 _ | _ 1 _ | _ 2 _ | _ 3 _
// TODO Make a function to see the prime numbers or the dots

// FINISHED TODO

// Global variables
char hor_path = '-', vert_path = '|', not_prime = 'o', prime = 'O';

// TODO use this later on
vector<bool> primes;
void SieveOfEratosthenes(int n) { // Time Complexity: O(n*log(log(n)))
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 0; i < n - 1; i++) { // removes one since 1 is not a prime number
        primes.push_back(true);
    }

    for (int p = 2; p * p <= n; p++) {
        if (primes.at(p)) {
            for (int i = p*p; i <= n; i += p) {
                primes.at(i) = false;
            }
        }
    }

}

// getting prime numbers
bool prime_check(double num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if ((int) num % i == 0) {
            return false;
        }
    }
    return true;
}

// create the matrix
vector<vector<char>> m;

void createMatrix(int D) {
    m.clear();
    for(int i = 0; i < D; i++) {
        vector<char> row;
        for(int j = 0; j < D; j++) {
            row.push_back(' ');
        }
        m.push_back(row);
    }
}

// create spiral
void createSpiral(int D) {
    createMatrix(D);

    int x, y, direction = 0, repeat = 2;

    // Finds the center of the spiral
    if(D % 2 == 0) {
        x = (D / 2) - 2; y = (D / 2) + 1;
    } else {
        x = (D / 2); y = (D / 2);
    }
    
    int max_step = 1, curr_step = 0, max_reached = 0;
    int total_moves = (D - 2) * 3 + 4;
    /*
     * 0 -> right
     * 1 -> up
     * 2 -> left
     * 3 -> down
     * */
    char path = hor_path;
    int num = 1;
    int curr_move = 1;

    /* For 1st move and last move:
     *      Have a conditional statement where if i is 1 or num is D
     *      
     *      if(i == D) check if num is a prime and stop moving?
     *      if(i == 1) just put the path
     * */
    
    for(int i = 1; i <= total_moves; i++) {
        if(curr_move % 4 == 0) {
            num++;
            if(prime_check(num)) {
                m[y][x] = prime;
            } else {
                m[y][x] = not_prime;
            }
            curr_move = 1;
        } else {
            m[y][x] = path;
        }

        curr_move++;
        curr_step++;

        // change direction
        if(curr_step == max_step) {
            max_reached++;
            if(direction == 3) {
                direction = 0;
            } else {
                direction++;
            }
            curr_step = 0;
        }
        
        if(max_reached == 2 && max_step < (D / 3) - 1) {
            max_step++;
        }

        // move to direction
        switch(direction) {
            case 0:
                x += 1;
                path = hor_path;
                break;
            case 1:
                y -= 1;
                path = vert_path;
                break;
            case 2:
                x -= 1;
                path = hor_path;
                break;
            case 3:
                y += 1;
                path = vert_path;
                break;
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
    createSpiral(dimension);

    printSpiral();
    return 0;
}
