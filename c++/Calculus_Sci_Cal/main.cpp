#include <iostream>
#include <math.h>
#include <string>

// CURRENT TODO
// TODO add conversion option after computing trigonometric functions
// TODO add formula for the last pages in the module
// TODO allow inputs for radians like 2/3 pi
// TODO add formulas for getting period etc
// TODO optimize to use global variabls or addresses.
// TODO add loops for how many inputs to calculate to all functions

// FINISHED TODO
// TODO separate code into functions
// TODO add proper prompts

const double PI = 3.14159265;
const std::string CLS = "\033[2J\033[1;1H";

/*Functions for calculating values*/

std::pair<double, double> Get_Pair_From_Fraction(std::string fraction, int div_pos) {
    std::pair<double, double> values;

    if(div_pos != std::string::npos) {
        double numerator = std::stod(fraction.substr(0, div_pos));
        double denominator = std::stod(fraction.substr(div_pos + 1, (int) fraction.length() - 1));
        values = std::pair(numerator, denominator);
    } else {
        double digit = std::stod(fraction);
        values = std::pair(digit, 1.0);
    }

    return values;
} 

void Convert_Radians_To_Degrees() {
    std::cout << "\tConvert Radians to Degrees(radians should be in decimal form not fraction)" << std::endl;
    std::cout << "\tEnter radians: "; 
    double radians; std::cin >> radians;
    double degrees = (radians * 180.0) / PI;
    std::cout << "\t\tEquivalent Degrees: " << degrees << std::endl;
}

void Convert_Degrees_To_Radians() {
    std::cout << "\tConvert Degrees to Radians" << std::endl;
    std::cout << "\tEnter degrees: "; 
    double degrees; std::cin >> degrees;
    double radians = (degrees * PI) / 180;
    std::cout << "\t\tEquivalent Radians: " << radians << std::endl;
}

void Degree_Trigonometric_Functions() {
    std::cout << "\tTrigonometric Functions in Degrees" << std::endl;
    std::cout << "\tEnter degrees: "; 
    double degrees; std::cin >> degrees;
    degrees = degrees * PI / 180.0;
    std::cout << "\t\tsin: " << sin(degrees) << std::endl;
    std::cout << "\t\tcos: " << cos(degrees) << std::endl;
    std::cout << "\t\ttan: " << tan(degrees) << std::endl;
    std::cout << "\t\tcsc: " << 1/sin(degrees) << std::endl;
    std::cout << "\t\tsec: " << 1/cos(degrees) << std::endl;
    std::cout << "\t\tcot: " << 1/tan(degrees) << std::endl;
}

void Radians_Trigonometric_Functions() {
    std::cout << "\tTrigonometric Functions in Radians" << std::endl;
    std::cout << "\tEnter degrees: "; 
    double radians; std::cin >> radians;
    std::cout << "\t\tsin: " << sin(radians) << std::endl;
    std::cout << "\t\tcos: " << cos(radians) << std::endl;
    std::cout << "\t\ttan: " << tan(radians) << std::endl;
    std::cout << "\t\tcsc: " << 1/sin(radians) << std::endl;
    std::cout << "\t\tsec: " << 1/cos(radians) << std::endl;
    std::cout << "\t\tcot: " << 1/tan(radians) << std::endl;
}

void Graph_Values_Cos_Sin() {
    std::cout << "\tAmplitude, Horizontal/Phase shift, vertical shift and period for sin and cos." << std::endl;
    std::cout << "\tInput format:" << std::endl;
    std::cout << "\ta => put positive or negative signs, doesn't matter." << std::endl;
    std::cout << "\tFor b:" << std::endl;
    std::cout << "\t   if b is a number, input: number n. ex: 3 n. " << std::endl;
    std::cout << "\t   if b is a pi, input: 1 pi." << std::endl;
    std::cout << "\t   if b is a number times pi, input: number pi. ex: 3 pi" << std::endl;
    std::cout << "\t   if b is a fraction, input: numerator/denominator n. ex: 1/2 n" << std::endl;
    std::cout << "\t   if b is a fraction times pi, input: numerator/denominator pi. ex: 1/2 pi" << std::endl;
    std::cout << "\t   Note: n means that there is no pi" << std::endl;
    std::cout << "\tFor c:" << std::endl;
    std::cout << "\t   if c is a pi, input 1 pi" << std::endl;
    std::cout << "\t   if c is fraction times pi, input: numerator/denominator pi. ex: 1/2 pi" << std::endl;
    std::cout << "\td => input as is. ex: -2" << std::endl;
    std::cout << "\tEnter a, b, c, d: "; 
    double a, b1, b2, c1, c2, d;
    std::string b_fraction, c_fraction, b_pi, c_pi;
    std::cin >> a >> b_fraction >> b_pi >> c_fraction >> c_pi >> d; 

    /*Calculate Amplitude*/
    // find / in b_fraction
    // get numerator and denominator from fraction
    // initialize b1 and b2
    // do the same to c_fraction
    int b_div_pos = (int) b_fraction.find('/');
    std::pair<double, double> result = Get_Pair_From_Fraction(b_fraction, b_div_pos);
    b1 = result.first; b2 = result.second;

    std::string Amplitude;
    if(b_div_pos != std::string::npos) { // for fractions
        if((2.0 * b2) % b1 == 0.0) {
            Amplitude.append((2 * b2) / b1); 
        } else {
            Amplitude.append((2 * b2) + "/" + b1 + " "); 
        }

        if(b_pi == "pi") {
            Amplitude.append(" pi");
        }     
    } else { // for numbers
        if(2.0 % b1 == 0) {
            Amplitude.append(2 / b1); 
        } else if(b1 % 2.0 == 0){
            Amplitude.append("1/" + (b1 / 2)); 
        }

        if(b_pi == "pi") {
            Amplitude.append(" pi");
        }     
    }

    /*Calculate Period*/
    int c_div_pos = (int) c_fraction.find('/');
    result = Get_Pair_From_Fraction(c_fraction, c_div_pos);
    c1 = result.first; c2 = result.second;

    std::cout << "\t\tAmplitude: " << abs(a) << std::endl;
    std::cout << "\t\tPeriod: " << b1 << std::endl;
    std::cout << "\t\tHorizontal/Phase shift: " << b1 << std::endl;
    std::cout << "\t\tVertical shift: " << b1 << std::endl;
}

void Graph_Values_Tan() {
    
}


/*Functions for getting formulas*/
void All_Formula() {
    std::cout << "\tArc Length" << std::endl;
    std::cout << "\ts = rt, where r is the radius and t is the " << std::endl;
}

void Choice_Prompt() {
    std::cout << "=======================================================" << std::endl;
    std::cout << "\tChoose what to calculate:" << std::endl;
    std::cout << "\t(1) Trigonometric Functions in Degrees" << std::endl;
    std::cout << "\t(2) Trigonometric Functions in Radians" << std::endl;
    std::cout << "\t(3) Convert Radians to Degrees" << std::endl;
    std::cout << "\t(4) Convert Degrees to Radians" << std::endl;
    std::cout << "\t(5) Show all formulas" << std::endl;
    std::cout << "\t(0) Exit" << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << "\t> ";
}

int main() {
    int choice;
    char continue_choice;
    bool flag = true;
    std::cout << CLS;
    do {
        Choice_Prompt();

        while(flag) {
            std::cin >> choice;

            switch(choice) {
                case 0:
                    std::cout << "\tExiting." << std::endl;
                    flag = false;
                    break;
                case 1:
                    Degree_Trigonometric_Functions();
                    flag = false;
                    break;
                case 2:
                    Radians_Trigonometric_Functions();
                    flag = false;
                    break;
                case 3:
                    Convert_Radians_To_Degrees();
                    flag = false;
                    break;
                case 4:
                    Convert_Degrees_To_Radians();
                    flag = false;
                    break;
                case 5:
                    All_Formula();
                    flag = false;
                    break;
                default:
                    std::cout << "\tInput number that is within the choices.\n\t> "; 
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
            }
        }
        
        flag = !flag;

        if(choice != 0) {
            std::cout << "\n\tContinue[y/n]?\n\t> ";
            std::cin >> continue_choice;
            tolower(continue_choice);
            while(continue_choice != 'y' && continue_choice != 'n') {
                std::cout << "\tPlease enter y/Y or n/N only.\n\t> ";
                std::cin >> continue_choice;
            }

            if(continue_choice == 'y') {
                std::cout << CLS;
            }
        }

    } while(continue_choice != 'n' && choice != 0);

    return 0;
}
