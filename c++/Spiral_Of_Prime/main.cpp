#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// CURRENT TODO
// TODO Use logic from spiral of prime by coding train for identifying prime numbers
// TODO Make the rMatrix size * 3 example: dimension is 3,    _ 1 _ | _ 2 _ | _ 3 _ | _ 1 _ | _ 2 _ | _ 3 _ | _ 1 _ | _ 2 _ | _ 3 _
// TODO Make a function to see the prime numbers or the dots
// TODO User Pointers

// FINISHED TODO


void create_list_of_primes(int &rDimension, vector<bool> &rPrimes) { // Time Complexity: O(n*log(log(n)))
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

    int x = 1, y = 1, direction = 0, orig_dimension = rDimension / 3, overall_cells = pow((rDimension / 3), 2),
        step = 0, number_of_steps = 1, repeated_steps = 0;
    
    // finds the center of the 2d vector by checking if the dimension is even or odd
    // if even, the center is x = (dimension / 2) - 2 and y = (dimension / 2) + 1
    // if odd, the center is x = dimension / 2 and y = dimension / 2
    if(rDimension % 2 == 0) {
        x += (rDimension / 2) - 3; y += (rDimension / 2);
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

                    // change directions
                    step++;
                    if(step == number_of_steps) {
                        repeated_steps++;
                        direction = (direction == 3) ? 0 : direction + 1;
                        step = 0;
                    }

                    if(number_of_steps != orig_dimension - 1) {
                        if(repeated_steps == 2) {
                            repeated_steps = 0;
                            number_of_steps++;
                        }
                    }

                    // move current index
                    switch(direction) {
                        case 0:
                            x++; // right
                            break;
                        case 1:
                            y--; // up
                            break;
                        case 2:
                            x--; // left
                            break;
                        case 3:
                            y++; // down
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
