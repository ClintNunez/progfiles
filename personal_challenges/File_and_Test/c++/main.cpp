#include <iostream>
#include <fstream>
#include <string>

int main() {
    //input from file
    std::string n;
    std::ifstream testFile("input.txt");
    
    if(testFile.is_open()){
        if(testFile.peek() == '*') {
            testFile.ignore();
        } else {
            while(std::getline(testFile, n)) {
                // idk anymore
            }
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
