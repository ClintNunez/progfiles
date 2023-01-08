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
    for (int p = 2; p * p <= rDimension; p++) {
        if (rPrimes.at(p)) {
            for (int i = p * p; i <= rDimension; i += p) {
                rPrimes.at(i) = false;
            }
        }
    }
}


// create spiral
void createSpiral(int &rDimension, vector<bool> &rPrimes ,vector<vector<char>> &rMatrix) {
    const char PATH_LEFT = '<', PATH_RIGHT = '>', PATH_UP = '^', 
          PATH_DOWN = 'v', NOT_PRIME = 'o', PRIME = 'O';

    int x, y, direction = 0, orig_dimension = rDimension / 3, overall_cells = pow((rDimension / 3), 2),
        step = 0, number_of_steps = 1, repeated_steps = 0;
    
    // finds the center of the 2d vector by checking if the dimension is even or odd
    // if even, the center is x = (dimension / 2) - 2 and y = (dimension / 2) + 1
    // if odd, the center is x = dimension / 2 and y = dimension / 2
    if(rDimension % 2 == 0) {
        x = (rDimension / 2) - 2; y = (rDimension / 2) + 1;
    } else {
        x = (rDimension / 2); y = (rDimension / 2);
    }

    // loops for the number of cells in the original dimension(dimension given by user without multiplying by 3) 
    for(int i = 1; i <= overall_cells; i++) {

        if(i == 1) {
            rMatrix[x][y] = NOT_PRIME;
            y++;
            rMatrix[x][y] = PATH_RIGHT;
            y++;

            step++;
        } if(i == overall_cells) {

            switch(direction) {
                case 0:
                    rMatrix[x][y] = PATH_RIGHT;
                    y++;
                    break;
                case 1:
                    rMatrix[x][y] = PATH_UP;
                    x--;
                    break;
                case 2:
                    rMatrix[x][y] = PATH_LEFT;
                    y--;
                    break;
                case 3:
                    rMatrix[x][y] = PATH_DOWN;
                    x++;
                    break;
            }

            if(rPrimes[i - 2])
                rMatrix[x][y] = PRIME;
            else 
                rMatrix[x][y] = NOT_PRIME;

        } else {
            for(int j = 0; j < 3; j++) {
                if(j == 1) {
                    if(rPrimes[i - 2])
                        rMatrix[x][y] = PRIME;
                    else 
                        rMatrix[x][y] = NOT_PRIME;

                    // move current index
                    switch(direction) {
                        case 0:
                            y++; // right
                            break;
                        case 1:
                            x--; // up
                            break;
                        case 2:
                            y--; // left
                            break;
                        case 3:
                            x++; // down
                            break;
                    }
                    
                    // change directions
                    if(step == number_of_steps) {
                        direction = (direction == 3) ? 0 : direction + 1;
                    }
                } else {
                    switch(direction) {
                        case 0:
                            rMatrix[x][y] = PATH_RIGHT;
                            y++;
                            break;
                        case 1:
                            rMatrix[x][y] = PATH_UP;
                            x--;
                            break;
                        case 2:
                            rMatrix[x][y] = PATH_LEFT;
                            y--;
                            break;
                        case 3:
                            rMatrix[x][y] = PATH_DOWN;
                            x++;
                            break;
                    }
                }
            }

            step++;
        }


        if(number_of_steps != orig_dimension - 1) {
            if(step == number_of_steps) {
                step = 0;
                repeated_steps++;

                if(repeated_steps == 2) {
                    repeated_steps = 0;
                    number_of_steps++;
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
    dimension *= 3;

    vector<bool> primes(dimension + 1, true); // +1 for good measure, remove after testing
    create_list_of_primes(dimension, primes);

    // Initialize a 2d vector and set its elements to ' '
    vector<vector<char>> rMatrix(dimension, vector<char>(dimension, ' '));

    createSpiral(dimension, primes, rMatrix);

    printSpiral(rMatrix);
    return 0;
}
