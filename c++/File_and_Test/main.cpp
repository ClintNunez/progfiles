#include <iostream>
#include <fstream>
#include <string>

// CURRENT TODO
// TODO add class for getting files
// TODO do all basic actions that you can do on files

// FINISHED TODO
//

int main() {
    //input from file
    std::string n;
    std::ifstream testFile("input.txt");
    
    if(testFile.is_open()){
        while(std::getline(testFile,n)) {
            std::cout << n << std::endl;
        }
    } else {
        std::cout << "File not available" << std::endl;
    }

    //output file
    std::ofstream out("out.txt");
    out << "HELLO I AM AN OUTPUT";
    out.close();
    return 0;
}
