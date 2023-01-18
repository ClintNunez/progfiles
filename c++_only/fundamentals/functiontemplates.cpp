#include <iostream>

template<typename T>
T add(T &num1, T &num2) {
    return num1 + num2;
}

int main() {
    int num1 = 1, num2 = 2;
    double dnum1 = 1.35, dnum2 = 2.35;

    std::cout << num1 << " + " << num2 << " = " << add<int>(num1, num2) << std::endl;
    std::cout << dnum1 << " + " << dnum2 << " = " << add<double>(dnum1, dnum2) << std::endl;

    return 0;
}
