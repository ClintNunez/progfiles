// Spiral of prime in terminal. Uses sieve of eratosthenes to make a list of prime numbers.

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// Sieve of Eratosthenes
void create_list_of_primes(int &rDimension, vector<bool> &rPrimes) { 
    for (int p = 2; p * p <= rDimension * rDimension; p++) {
        if (rPrimes.at(p)) {
            for (int i = p * p; i <= rDimension * rDimension; i += p) {
                rPrimes.at(i) = false;
            }
        }
    }
}


// create spiral
void createSpiral(int &rDimension, vector<bool> &rPrimes ,vector<vector<char>> &rMatrix) {
    const char PATH_LEFT = '<', PATH_RIGHT = '>', PATH_UP = '^', 
          PATH_DOWN = 'v', NOT_PRIME = 'o', PRIME = '@';

    // direction starts at 0(right) then 1(up), 2(left), 3(down) and then resets
    // overall_cells is the number of cells using the original dimension given by the user
    int x = 0, y = 0, direction = 0, orig_dimension = rDimension / 3, overall_cells = pow((rDimension / 3), 2),
        step = 0, max_steps = 1, max_step_reached = 0;
    
    // finds the starting index in the 2d vector
    if(rDimension % 2 == 0) {
        x += (rDimension / 2) - 2; y += (rDimension / 2) + 1;
    } else {
        x += (rDimension / 2); y += (rDimension / 2);
    }

    // loops for the number of cells in the original dimension(dimension given by user without multiplying by 3) 
    for(int i = 1; i <= overall_cells; i++) {

        if(i == 1) {
            rMatrix[y][x] = NOT_PRIME;
            x++;
            rMatrix[y][x] = PATH_RIGHT;
            x++;

        } else if(i == overall_cells) {
            switch(direction) {
                case 0:
                    rMatrix[y][x] = PATH_RIGHT;
                    x++;
                    break;
                case 1:
                    rMatrix[y][x] = PATH_UP;
                    y--;
                    break;
                case 2:
                    rMatrix[y][x] = PATH_LEFT;
                    x--;
                    break;
                case 3:
                    rMatrix[y][x] = PATH_DOWN;
                    y++;
                    break;
            }

            if(rPrimes[i])
                rMatrix[y][x] = PRIME;
            else 
                rMatrix[y][x] = NOT_PRIME;

        } else {
            for(int j = 0; j < 3; j++) {
                if(j == 1) {

                    if(rPrimes[i])
                        rMatrix[y][x] = PRIME;
                    else 
                        rMatrix[y][x] = NOT_PRIME;

                    step++;
                    if(step == max_steps) {
                        max_step_reached++;
                        direction = (direction == 3) ? 0 : direction + 1;
                        step = 0;
                    }

                    if(max_steps != orig_dimension - 1) {
                        if(max_step_reached == 2) {
                            max_step_reached = 0;
                            max_steps++;
                        }
                    }

                    switch(direction) {
                        case 0:
                            x++; 
                            break;
                        case 1:
                            y--;
                            break;
                        case 2:
                            x--;
                            break;
                        case 3:
                            y++;
                            break;
                    }
                    
                } else {
                    switch(direction) {
                        case 0:
                            rMatrix[y][x] = PATH_RIGHT;
                            x++;
                            break;
                        case 1:
                            rMatrix[y][x] = PATH_UP;
                            y--;
                            break;
                        case 2:
                            rMatrix[y][x] = PATH_LEFT;
                            x--;
                            break;
                        case 3:
                            rMatrix[y][x] = PATH_DOWN;
                            y++;
                            break;
                    }
                }
            }
        }
    }
}

// print rMatrix
void printSpiral(vector<vector<char>> &rMatrix) {
    for(vector<char> row : rMatrix) {
        for(char element : row) {
            cout << element;
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter dimensions of rMatrix: ";
    int dimension; cin >> dimension;

    vector<bool> primes(dimension * dimension + 1, true); 
    create_list_of_primes(dimension, primes);

    // multiply the dimension by 3 to make room for the paths
    // _ _ _
    // _ @ <
    // _ v _
    dimension *= 3;
    // Initialize a 2d vector and set its elements to ' '
    vector<vector<char>> rMatrix(dimension, vector<char>(dimension, ' '));

    createSpiral(dimension, primes, rMatrix);

    printSpiral(rMatrix);
    return 0;
}
