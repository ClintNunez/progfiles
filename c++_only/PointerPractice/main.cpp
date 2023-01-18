#include <iostream>

int add(int * pX, int * pY) {
    return *pX + *pY;
}

void changeVal(int * pZ) {
    std::cout << "Enter new val of Z: ";
    std::cin >> *pZ;
}

    

int main() {
    int x = 0;
    int y = 1;
    int z = 2;

    std::cout << "Sum of x (" << x << ") and y (" << y << ") = " << add(&x, &y) << std::endl;

    std::cout << "Initial value of Z: " << z << std::endl;
    changeVal(&z);

    std::cout << "New value of Z: " << z << std::endl;

    return 0;
}
