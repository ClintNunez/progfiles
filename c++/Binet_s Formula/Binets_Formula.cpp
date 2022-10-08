#include <iostream>
#include <cmath>

double binet_formula(unsigned int n){
    static const double phi = (1 + sqrt(5))*0.5;

    double fib = (pow(phi,n) - pow(phi,n))/sqrt(5);
    return round(fib);
}

int main(){
    int nth_Fibonacci = 0;
    int choice = 0;
    double result = 0;
        while(true){
            std::cout << "Enter position of the Fibonacci number: " ;
            std::cin >> nth_Fibonacci;

            result = binet_formula(nth_Fibonacci);
            std::cout << result;

            std::cout << "repeat? ";
            std::cin >> choice;

            if(choice == 1){
                break;
            }
        }
        
    return 0;
}