#include "Helper.h"
#include <iostream>
#include <cstring>
#include <fstream>

struct Animal_Names{
    char dog_name[12];
    char cat_name[12];
    char bird_name[12];
};

int main() {
    std::fstream file;

    Animal_Names a1, a2;

    //std::strcpy(a2.dog_name, "no_name");
    //std::strcpy(a2.cat_name, "no_name");
    //std::strcpy(a2.bird_name, "no_name");

    //file.open("names.txt", std::ios::out | std::ios::binary);
    //file.write(reinterpret_cast<char *>(&a2), sizeof(Animal_Names));
    //file.close();

    std::strcpy(a1.dog_name, helper::GetNameFromFile('1').c_str());
    std::strcpy(a1.cat_name, helper::GetNameFromFile('2').c_str());
    std::strcpy(a1.bird_name, helper::GetNameFromFile('3').c_str());

    std::cout << a1.dog_name << ' ' << a1.cat_name << ' ' << a1.bird_name << "\n";

    //helper::SaveNameToFile('1', "doggy");

    //std::strcpy(a1.dog_name, helper::GetNameFromFile('1').c_str());

    //std::cout << a1.dog_name << ' ' << a1.cat_name << ' ' << a1.bird_name << "\n";
    return 0;
}
