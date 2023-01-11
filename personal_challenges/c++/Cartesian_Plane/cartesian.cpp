#include <iostream>
#include <stdlib.h>
// FINISHED TODO:
//  TODO Try to center the cartesian plane (fixed in makeCartesian_BIG)
//  TODO REFACTOR(fixed in const char variables)
//  TODO fix bug when plotting points.(fixed in printCartesian())
//  TODO add logic for saving coordinates.(fixed in plotPOINTsInCartesian())

// PENDING TODO:
// TODO Add functions for creating shapes (rectangle, triangle, parallelogram, square, trapezoid.)
// TODO Fix printCartesian() bug in positioning of y axis
// TODO Add printCartesian() to functions that prints the cartesian
// TODO Add code for drawing a line

const char XAXIS_LEFTEND = '<', XAXIS_LINE = '-', XAXIS_RIGHTEND = '>',
            YAXIS_TOPEND = '^', YAXIS_LINE = '|', YAXIS_BOTTOMEND = 'v',
            ORIGIN = 'o', POINT = 'O', SPACE = ' ';

/*
<---------------o--------------->
0      15      16      31       32    size = 33
0 and 32 - edge,
1 - 15 and 17 - 31 - positions that a POINT can take,
16 - ORIGIN
*/
const int LIMIT = 33, ORIGIN_POS = 16;
char cartesian[LIMIT][LIMIT] = {};

// [2] - x and y coordinate, [10] - can hold 10 points(0 - 9)
int pointsList[2][10] = {};
int currentPointPos = 0;

void printCartesian(){
  std::cout << "\n";
  for(int y = 0; y < LIMIT; y++){
    for(int x = 0; x < LIMIT; x++){
      std::cout << " " << cartesian[x][y];
      if(x == LIMIT - 1){
        std::cout << "\n";
      }
    }
  }
}

void makeCartesian_BIG(int size){
  pointsList[2][10] = {};
  currentPointPos = 0;
  for(int y = 0; y < LIMIT; y++){
    for(int x = 0; x < LIMIT; x++){
      if(x == ORIGIN_POS && y == (ORIGIN_POS - size)){
        cartesian[x][y] = YAXIS_TOPEND; // puts ▲ in current pos

      }else if(x == ORIGIN_POS && y == ORIGIN_POS){
        cartesian[x][y] = ORIGIN; // puts 'o' in current pos

      }else if(x == ORIGIN_POS && (y < (ORIGIN_POS + size) && y > (ORIGIN_POS - size))){
        cartesian[x][y] = YAXIS_LINE; // puts '|' in current pos

      }else if(x == ORIGIN_POS && y == (ORIGIN_POS + size)){
        cartesian[x][y] = YAXIS_BOTTOMEND; // puts ▼ in current pos

      }else if(x == (ORIGIN_POS - size) && y == ORIGIN_POS){
        cartesian[x][y] = XAXIS_LEFTEND; // puts ◄ in current pos

      }else if((x < (ORIGIN_POS + size) && x > (ORIGIN_POS - size)) && y == ORIGIN_POS){
        cartesian[x][y] = XAXIS_LINE; // puts '-' in current pos

      }else if(x == (ORIGIN_POS + size) && y == ORIGIN_POS){
        cartesian[x][y] = XAXIS_RIGHTEND; // puts ► in current pos
      }else{
        cartesian[x][y] = SPACE; // puts ' ' in current pos
      }
    }
  }
}

void plotPOINTsInCartesian(int x, int y){
    int tempX, tempY;
    bool existingPoint = false;
    if(currentPointPos == 0){

      cartesian[ORIGIN_POS + x][ORIGIN_POS - y] = POINT; // puts 'O' in current pos
      pointsList[0][currentPointPos] = x;
      pointsList[1][currentPointPos] = y;
      currentPointPos++;
    }else{
      for(int this_y = 0; this_y < currentPointPos; this_y++){
          tempX = pointsList[0][this_y];
          tempY = pointsList[1][this_y];
          if(x == tempX && y == tempY){
            existingPoint = true;
          }
      }
      if(!existingPoint){
        cartesian[ORIGIN_POS + x][ORIGIN_POS - y] = POINT; // puts 'O' in current pos

        pointsList[0][currentPointPos] =  x;
        pointsList[1][currentPointPos] = y;
        currentPointPos++;
      }
    }
}

void drawLineThroughPoints() {
     
	

	 printCartesian();
}

// might be the same as drawRectangle
void drawSquare(){

}

void drawRectangle(){

}

void drawParallelogram(){

}

void drawTrapezoid(){

}

void drawTriangle(){

}

//main function for drawing a shape.
void drawShape(){

}



// temporary function, might get deleted if not useful.
void printPoints(){
  std::cout << "\n\tNumber of plotted points: " << (currentPointPos + 1) << std::endl;
  for(int y = 0; y < currentPointPos; y++){
    std::cout << "\t\t" << (y + 1) << ". (" << pointsList[0][y] << ", " << pointsList[1][y] << ")"<< std::endl;
  }
}

// TODO clear screen after each choice.
int main(){
    int x, y, sizeOfCartesian, choice;

    std::cout << "\n\tEnter size of Cartesian Plane(15 is the limit.): ";
    std::cin >> sizeOfCartesian;

    //Adds an offset to allow placement of edge characters and the origin.
    sizeOfCartesian += 1;

    makeCartesian_BIG(sizeOfCartesian);
    printCartesian();

    do{
      std::cout << "\n===============================================\n";
      std::cout <<
         "\tChoose action: "
      << "\n\t(1)Plot a POINT "
      << "\n\t(2)List plotted points "
      << "\n\t(3)Draw a line through the points "
      << "\n\t(4)Make a new cartesian plane "
      << "\n\t(0)Exit "
      << "\n\tChoice: ";

      std::cin >> choice;
      std::cout << "===============================================\n";

      switch(choice){
        case 0:
          std::cout << "\n\tExiting.\n";
          break;
        case 1:
          std::cout << "\n\n\tEnter x and y coordinate: ";
          std::cin >> x >> y;

          // Handles coordinates that exceeds the bounds of the cartesian plane.
          while(x > (sizeOfCartesian - 1) || y > (sizeOfCartesian - 1)){
            std::cout <<
            "\n\tPlease enter coordinates that are within the bounds of the cartesian plane."
         << "\n\n\tEnter x and y coordinate: ";
            std::cin >> x >> y;
          }

          plotPOINTsInCartesian(x, y);
          printCartesian();

          break;
        case 2:
          printPoints();
          break;
        case 3:
            drawLineUsingSlopeIntercept(m,x,b);
	  
            break;
        case 4:
          std::cout << "\n\tEnter size of Cartesian Plane(15 is the limit.): ";
          std::cin >> sizeOfCartesian;
          sizeOfCartesian += 1;

          makeCartesian_BIG(sizeOfCartesian);
          printCartesian();

          break;
        default:
          std::cout << "\n\tInvalid choice.\n";
          break;
      }
    }while(choice != 0);

    return 0;
}
