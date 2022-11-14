#include <iostream>
#include <iomanip>
#include <map>
#include <vector>


// BUG TODO
// TODO fix bug in showing the list of points by converting map to vector

// CURRENT TODO
// TODO use clear screen or buffer?
// TODO Reword prompt for getting size of cartesian plane
// TODO MAKE cartesian_plane centered

// FINISHED TODO
// TODO add contents of functions
// TODO Convert past logic for array to vectors
// TODO FIX output for showing points


std::vector<std::vector<char>> cartesian_plane;
std::vector<std::pair<int,int>> points;
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
        std::cout << std::endl;
        cartesian_plane.push_back(each_row);
    }
    
    printCartesian();
}

void plotPoint(int& x, int& y) {
    auto does_point_exist = points.find(x);
    if(does_point_exist == points.end()) {
        points.insert(std::pair(x, y));
        cartesian_plane[ORIGIN_POS - y][ORIGIN_POS + x] = POINT;
    } else {
        if(does_point_exist->second != y){
            points.insert(std::pair(x, y));
            cartesian_plane[ORIGIN_POS - y][ORIGIN_POS + x] = POINT;
        } else {
            std::cout << "Point already exist." << std::endl;
        }
    }
    printCartesian();
}

void printPoints() {
    int point_num = 1;
    for(auto& each_point : points) {
        std::cout << "\t\t(" << point_num << ") " << "x: " << each_point.first << " y: " << each_point.second << std::endl;
        point_num++;
    }

}

void choicePrompt() {
    std::cout << "==================================================" << std::endl;
    std::cout << "\tChoose action: "
            << "\n\t(1)Plot a point."
            << "\n\t(2)Show coordinates of points."
            << "\n\t(0)Exit." << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "\n\tChoice: ";
    std::cin >> user_choice;
}

int main() {
    std::cout << "\n\tEnter size of Cartesian Plane: "; //reword
    int size_of_cartesian; std::cin >> size_of_cartesian;

    size_of_cartesian; // adds an offset for edge characters: '<' & '>'

    makeCartesianPlane(size_of_cartesian);

    do {
        choicePrompt();

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
