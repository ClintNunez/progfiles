#include "protein_translation.h"
#include<iostream>
#include<vector>
#include<string>

int main() {
    std::cout << "Enter RNA: ";
    std::string RNA; std::cin >> RNA; 

    std::vector<std::string> result = protein_translation::proteins(RNA);

    for(std::vector<std::string>::iterator eachElement = result.begin(); eachElement != result.end(); eachElement++) {
        std::cout << *eachElement << " " << std::endl;
    }

    return 0;
}
