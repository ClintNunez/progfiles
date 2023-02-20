#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

/*
 * TODO
 * - Add functions for finding definitions from a binary file.
 * 
 * DONE
 * - Add function for saving names for the animals
 *
 * */

namespace helper {
    const std::string NAME_FILE = "names.txt";
    static std::fstream Current_File;

    inline void CLS() {
        std::cout << "\033[2J\033[1;1H";
    }

    inline void Ignore() {
        std::cin.ignore(1);
    }

    // getting and saving name
    static struct {
        char dog_name[12];
        char cat_name[12];
        char bird_name[12];
    } Animal_Names ;

    static std::string name_from_file;

    inline std::string GetNameFromFile(char animal_ID) {
        Current_File.open(NAME_FILE, std::ios::in | std::ios::binary);
        Current_File.read(reinterpret_cast<char *>(&Animal_Names), sizeof(Animal_Names));
        Current_File.close();
        
        switch(animal_ID) {
            case '1':
                name_from_file = Animal_Names.dog_name;
                break;
            case '2':
                name_from_file = Animal_Names.cat_name;
                break;
            case '3':
                name_from_file = Animal_Names.bird_name;
                break;
        }
        
        return name_from_file;
    }

    inline void SaveNameToFile(char animal_ID, std::string given_name) {
        Current_File.open(NAME_FILE, std::ios::out | std::ios::binary);
        
        switch(animal_ID) {
            case '1':
                std::strcpy(Animal_Names.dog_name, given_name.c_str());
                Current_File.write(reinterpret_cast<char *>(&Animal_Names), sizeof(Animal_Names)); // 12 characters
                break;
            case '2':
                std::strcpy(Animal_Names.cat_name, given_name.c_str());
                Current_File.write(reinterpret_cast<char *>(&Animal_Names), sizeof(Animal_Names)); // 12 characters
                break;
            case '3':
                std::strcpy(Animal_Names.bird_name, given_name.c_str());
                Current_File.write(reinterpret_cast<char *>(&Animal_Names), sizeof(Animal_Names)); // 12 characters
                break;
        }

        Current_File.close();
    }
}

#endif
