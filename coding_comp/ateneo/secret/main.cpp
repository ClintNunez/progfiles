#include <iostream>
#include <string>
#include <vector>
using std::cout; using std::cin;
using std::vector; using std::string;

// know how to find perfect squares
//
int main(){
    string n;
    cin >> n;
    int len=n.size();
    if(len>=1&&len<=100){
        int column,row;
        /*Insert code for finding perfect square*/
        if(len%2==0){
            column=len/2;
            row=len/column;
        }
        else {
            column=len/2+1;
            row=len/column-1;
        }
            
        char table[row][column];
        
        int elemctr=0;
        for(int i=0;i<row;i++) {
            for(int j=0;j<column;j++){
                table[i][j]=n[elemctr];
                elemctr++;
            }
        }

        for(int i=0;i<column;i++) {
            for(int j=0;j<row;j++){
                cout << table[i][j];
            }
            cout << " ";
        }
    }

    return 0;
}


