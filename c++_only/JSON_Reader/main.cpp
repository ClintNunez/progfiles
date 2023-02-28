#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

int main() {
    std::fstream f;

    f.open("test.json", std::ios::in);
    // parse the whole json file to data
    json data = json::parse(f);    

    // close fstream
    f.close();
           
    // printing the objects
    std::cout << data["name"] << std::endl;

    std::cout << data["age"] << std::endl;

    // change the value of "name", does not change the actual value in the json file
    data["name"] = "patrick";

    // print the new value of "name"
    std::cout << data["name"] << std::endl;

    // print the contents of array
    for(int i = 0; i < data["array"].size(); i++) {
        std::cout << data["array"][i] << std::endl;
    }

    // print the contents of an array of objects
    json obj; // create a new json object that will hold the value of each object in the array
    for(int i = 1; i <= data["objarray"].size(); i++) {
        obj = data["objarray"][i - 1]; // get each object
        
        // access the value by appending the value of i to "obj" to get the correct key
        /*
        "objarray" : [
            {
                "obj1" : "name1"
            },
            {
                "obj2" : "name2"
            },
            {
                "obj3" : "name3"
            }
        ]
        */
        std::cout << obj["obj" + std::to_string(i)] << std::endl;
    }

    // change the value of a key in the json file
    json newdata = data;
    newdata["name"] = "patrick";

    f.open("test.json", std::ios::out);

    f << std::setw(4) << newdata << '\n';

    f.close();
    
    std::cout << std::setw(4) << data << '\n';

    return 0;
}
