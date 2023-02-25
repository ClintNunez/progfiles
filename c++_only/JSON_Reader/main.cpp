#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

int main() {
    std::fstream f("test.json");
    json data = json::parse(f);    
           
    std::cout << data["name"] << std::endl;

    std::cout << data["age"] << std::endl;

    data["name"] = "patrick";

    std::cout << data["name"] << std::endl;

    return 0;
}
