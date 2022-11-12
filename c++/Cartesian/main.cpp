#include <iostream>
#include <iomanip>
#include <vector>

// CURRENT TODO
// TODO Convert past logic for array to vectors
// TODO add contents of functions
// TODO make use of different data structs like pairs etc.
// TODO use clear screen or buffer?
// TODO Reword prompt for getting size of cartesian plane

// FINISHED TODO
//

std::vector<std::vector<char>> cartesian_plane;
std::vector<std::pair<int, int>> points;

const char XAXIS_LEFTEND = '<', XAXIS_LINE = '-', XAXIS_RIGHTEND = '>',
            YAXIS_TOPEND = '^', YAXIS_LINE = '|', YAXIS_BOTTOMEND = 'v',
            ORIGIN_SIGN = 'o', Point = 'O', SPACE = ' ';

void printCartesian() {
    for(int i = 0; i < cartesian_plane.size(); i++) {
        for(int j = 0; j < cartesian_plane[i].size(); j++) {
            std::cout << std::setw(2) << cartesian_plane[i][j];
        }
        std::cout << std::endl;
    }
}

void makeCartesianPlane(int size_of_side) {
    // reset data
    points.clear();
    const int size_of_cartesian = (size_of_side * 2) + 3; // * 2 for each side and 3 for origin, and 2 edges
    const int ORIGIN_POS = size_of_cartesian / 2;
    
    for(int y = 0; y < size_of_cartesian; y++) {
        std::vector<char> each_row;
        for(int x = 0; x < size_of_cartesian; x++) {
            if(x == ORIGIN_POS && y == ORIGIN_POS) {
                each_row.push_back(ORIGIN_SIGN);
            } else if(x == ORIGIN_POS && y == (ORIGIN_POS - (size_of_side + 1))) {
                each_row.push_back(YAXIS_TOPEND);
            } else if(x == ORIGIN_POS && (y > 0 && y < (size_of_cartesian - 1))) {
                each_row.push_back(YAXIS_LINE);
            } else if(x == ORIGIN_POS && y == (ORIGIN_POS + (size_of_side + 1))) {
                each_row.push_back(YAXIS_BOTTOMEND);
            } else if(x == (ORIGIN_POS - (size_of_side + 1)) && y == ORIGIN_POS) {
                std::cout << "reached" << std::endl;
                each_row.push_back(XAXIS_LEFTEND);
            } else if((x > 0 && x < (size_of_cartesian - 1)) && y == ORIGIN_POS) {
                each_row.push_back(XAXIS_LINE);
            } else if(x == (ORIGIN_POS + (size_of_side + 1)) && y == ORIGIN_POS) {
                each_row.push_back(XAXIS_RIGHTEND);
            } else {
                each_row.push_back(SPACE);
            }
        }
        std::cout << std::endl;
        cartesian_plane.push_back(each_row);
    }
    
    printCartesian();
}

void plotPoint(int& x, int& y) {
    points.push_back(std::make_pair(x,y));
    /*Insert code for plotting the actual point*/
    // always get the back of the vector to get the recent point
    printCartesian();
}

void printPoints() {
    /*Insert code*/
}

void choicePrompt() {
    /*Insert code*/
}

int main() {
    std::cout << "\n\tEnter size of Cartesian Plane: "; //reword
    int size_of_cartesian; std::cin >> size_of_cartesian;

    size_of_cartesian; // adds an offset for edge characters: '<' & '>'

    makeCartesianPlane(size_of_cartesian);

    int user_choice;
    do {
        choicePrompt();
        std::cin >> user_choice;

        switch(user_choice) {
            case 0:
                std::cout << "\n\tExiting.\n" << std::endl;
                break;
            case 1:
                /* Plot a Point */
                std::cout << "\n\tPlease enter coordinates x and y: ";
                int x; std::cin >> x; 
                int y; std::cin >> y;
                // Add logic for checking if coordinate is within the cartesian plane.

                plotPoint(x, y);

                break;
            case 2:
                /* List Points */
                printPoints();
                break;
        }

    } while(user_choice != 0);

    return 0;
}
