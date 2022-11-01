#include "space_age.h"
#include <iostream>

int main() {
    std::cout << "Enter age in seconds: ";
    double age; std::cin >> age;

    space_age::age SpaceAge(age);

    std::cout << "On Mercury: " << SpaceAge.on_mercury() << std::endl;
    std::cout << "On Venus: " << SpaceAge.on_venus() << std::endl;
    std::cout << "On Earth: " << SpaceAge.on_earth() << std::endl;
    std::cout << "On Mars: " << SpaceAge.on_mars() << std::endl;
    std::cout << "On Saturn: " << SpaceAge.on_saturn() << std::endl;
    std::cout << "On Jupiter: " << SpaceAge.on_jupiter() << std::endl;
    std::cout << "On Uranus: " << SpaceAge.on_uranus() << std::endl;
    std::cout << "On Neptune: " << SpaceAge.on_neptune() << std::endl;
    return 0;
}
