#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <set>
#include <vector>

// BUG TODO
// TODO fix bug in showing the list of points by converting map to vector

// CURRENT TODO
// TODO refactor code to be like the calculus program
// TODO use clear screen or buffer?
// TODO Reword prompt for getting size of cartesian plane
// TODO MAKE cartesian_plane centered

// FINISHED TODO
// TODO add contents of functions
// TODO Convert past logic for array to vectors
// TODO FIX output for showing points

const std::string CLS = "\033[2J\033[1;1H";

std::vector<std::vector<char>> cartesian_plane;
std::set<std::pair<int,int>> points;
int ORIGIN_POS;
int user_choice;


const char XAXIS_LEFTEND = '<', XAXIS_LINE = '-', XAXIS_RIGHTEND = '>',
            YAXIS_TOPEND = '^', YAXIS_LINE = '|', YAXIS_BOTTOMEND = 'v',
            ORIGIN_SIGN = 'o', POINT = 'O', SPACE = ' ';

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
    ORIGIN_POS = size_of_cartesian / 2;
    
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
                each_row.push_back(XAXIS_LEFTEND);
            } else if((x > 0 && x < (size_of_cartesian - 1)) && y == ORIGIN_POS) {
                each_row.push_back(XAXIS_LINE);
            } else if(x == (ORIGIN_POS + (size_of_side + 1)) && y == ORIGIN_POS) {
                each_row.push_back(XAXIS_RIGHTEND);
            } else {
                each_row.push_back(SPACE);
            }
        }
        cartesian_plane.push_back(each_row);
    }
    
    printCartesian();
}

void plotPoint(int x, int y) {
    // use set pair
    // use find(pair) 
    // if exists print point already exist
    // else add pair to set
    auto does_point_exist = points.find(std::pair<double, double>(x, y));
    if(does_point_exist == points.end()) {
        points.insert(std::pair<double, double>(x, y));
        cartesian_plane[ORIGIN_POS - y][ORIGIN_POS + x] = POINT;
    } else {
        if(does_point_exist->second != y){
            points.insert(std::pair<double, double>(x, y));
            cartesian_plane[ORIGIN_POS - y][ORIGIN_POS + x] = POINT;
        } else {
            std::cout << "Point already exist." << std::endl;
        }
    }
    printCartesian();
}

void printPoints() {
    // iterate over set pair using for loop with unsigned int
    // print each point in format: (i) (x, y)
    std::cout << "\tCoordinates of plotted points:" << std::endl;
    int n = 1;
    for(std::set<std::pair<int, int>>::iterator each_point = points.begin(); each_point != points.end(); each_point++) {
        printf("\t(%i) %i, %i\n", n, each_point->first, each_point->second);
        n++;
    }
}

void choicePrompt() {
    std::cout << "==================================================" << std::endl;
    std::cout << "\tChoose action: "
            << "\n\t(1)Plot a point."
            << "\n\t(2)Show coordinates of points."
            << "\n\t(0)Exit." << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "\t> ";
    std::cin >> user_choice;
}

int main() {
    std::cout << CLS;
    std::cout << "\n\tEnter size of Cartesian Plane: "; //reword
    int size_of_cartesian; std::cin >> size_of_cartesian;


    makeCartesianPlane(size_of_cartesian);

    do {
        choicePrompt();

        switch(user_choice) {
            case 0:
                std::cout << "\n\tExiting.\n" << std::endl;
                break;
            case 1:
                /* Plot a Point */
                std::cout << CLS;
                std::cout << "\n\tPlease enter coordinates x and y: ";
                int x; std::cin >> x; 
                int y; std::cin >> y;
                // Add logic for checking if coordinate is within the cartesian plane.

                plotPoint(x, y);

                break;
            case 2:
                /* List Points */
                std::cout << CLS;
                printPoints();
                break;
        }

    } while(user_choice != 0);

    return 0;
}
