#include <iostream>
#include <vector>

// CURRENT TODO
// TODO Convert past logic for array to vectors
// TODO add contents of functions
// TODO make use of different data structs like pairs etc.
// TODO use clear screen or buffer?

// FINISHED TODO
//

const char XAXIS_LEFTEND = '<', XAXIS_LINE = '-', XAXIS_RIGHTEND = '>',
            YAXIS_TOPEND = '^', YAXIS_LINE = '|', YAXIS_BOTTOMEND = 'v',
            ORIGIN = 'o', Point = 'O', SPACE = ' ';

void printCartesian() {
    /*Insert code*/
}

void makeCartesianPlane(int size) {
    /*Insert code*/

    printCartesian();
}

void plotPoint(int x, int y) {
    /*Insert code*/
}

void printPoints() {
    /*Insert code*/
}

void choicePrompt() {
    /*Insert code*/
}

int main() {
    std::cout << "\n\tEnter size of Cartesian Plane: ";
    int size_of_cartesian; std::cin >> size_of_cartesian;

    size_of_cartesian++; // adds an offset for edge characters: '<' & '>'

    makeCartesianPlane(size_of_cartesian);

    int user_choice;
    do {
        choicePrompt();
        std::cin >> user_choice;

        switch(choice) {
            case 0:
                /* Exit */
                break;
            case 1:
                /* Plot a Point */
                break;
            case 2:
                /* List Points */
                break;
        }

    } while(user_choice != 0);

    return 0;
}
