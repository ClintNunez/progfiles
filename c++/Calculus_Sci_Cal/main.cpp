#include <iostream>
#include <math.h>
#include <string>

// CURRENT TODO
// TODO optimize to use global variabls or addresses.
// TODO add loops for how many inputs to calculate to all functions
// TODO add loops for how many inputs to calculate to all functions

// FINISHED TODO
// TODO allow inputs for radians like 2/3 pi
// TODO add formulas for getting period etc
// TODO separate code into functions
// TODO add proper prompts

const double PI = 3.14159265;
const std::string CLS = "\033[2J\033[1;1H";

/*Functions for calculating values*/

std::pair<int, int> Get_Pair_From_Fraction(std::string fraction, int div_pos) {
    std::pair<int, int> values;

    if(div_pos != std::string::npos) {
        int numerator = std::stoi(fraction.substr(0, div_pos));
        int denominator = std::stoi(fraction.substr(div_pos + 1, (int) fraction.length() - 1));
        values = std::pair(numerator, denominator);
    } else {
        int digit = std::stoi(fraction);
        values = std::pair(digit, 1);
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
    std::cout << "\n\tInput format:" << std::endl;
    std::cout << "\ta => put positive or negative signs, doesn't matter." << std::endl;
    std::cout << "\tFor b:" << std::endl;
    std::cout << "\t   if b is a number, input: number n. ex: 3 n. " << std::endl;
    std::cout << "\t   if b is a pi, input: 1 pi." << std::endl;
    std::cout << "\t   if b is a number times pi, input: number pi. ex: 3 pi" << std::endl;
    std::cout << "\t   if b is a fraction, input: numerator/denominator n. ex: 1/2 n" << std::endl;
    std::cout << "\t   if b is a fraction times pi, input: numerator/denominator pi. ex: 1/2 pi" << std::endl;
    std::cout << "\t   Note: n means that there is no pi and don't put negative signs before b." << std::endl;
    std::cout << "\tFor c:" << std::endl;
    std::cout << "\t   if c is a pi, input 1 pi" << std::endl;
    std::cout << "\t   if c is fraction times pi, input: numerator/denominator pi. ex: 1/2 pi" << std::endl;
    std::cout << "\t   if c does not exist, input: 0 n" << std::endl;
    std::cout << "\t   Note: c seems to always have a pi." << std::endl;
    std::cout << "\td => input as is. ex: -2" << std::endl;
    std::cout << "\n\tSample Complete input:" << std::endl;
    std::cout << "\t3 1/2 pi 1 n 0 | These inputs means that a = 3/-3, b = 1/2 pi, c = 0 or does not exist, d = 0 or does not exist." << std::endl;
    std::cout << "\n\tEnter a, b, c, d: "; 

    int a, b1, b2, c1, c2, d;
    std::string b_fraction, c_fraction, b_pi, c_pi;
    std::cin >> a >> b_fraction >> b_pi >> c_fraction >> c_pi >> d; 

    /*Calculate Period (2pi/|b|)*/
    int b_div_pos = (int) b_fraction.find('/');
    std::pair<int, int> result = Get_Pair_From_Fraction(b_fraction, b_div_pos);
    b1 = result.first; b2 = result.second;

    std::string period;
    if(b_div_pos != std::string::npos) { // for fractions
        if((2 * b2) % b1 == 0) {
            period.append(std::to_string((2 * b2) / b1)); 
        } else {
            period.append((2 * b2) + "/" + b1); 
        }

        if(b_pi != "pi") {
            period.append(" pi");
        }     
    } else { // for numbers
        if(2 % b1 == 0) {
            period.append(std::to_string(2 / b1)); 
        } else if(b1 % 2 == 0){
            period.append("1/" + std::to_string(b1 / 2)); 
        } else {
            period.append("2/" + std::to_string(b1));
        }
        
        if(b_pi != "pi") {
            period.append(" pi");
        }     
    }

    /*Calculate Phase shift (c/b)*/
    int c_div_pos = (int) c_fraction.find('/');
    result = Get_Pair_From_Fraction(c_fraction, c_div_pos);
    c1 = result.first; c2 = result.second;

    std::string phase_shift;
    if(c1 != 0) {
        if(c_div_pos != std::string::npos && b_div_pos != std::string::npos) { // for b and c are fractions
            if((c1 * b2) % (c2 * b1) == 0) {
                phase_shift.append(std::to_string((c1 * b2) / (c2 * b1))); // numerator: (c1 * b2), denominator: (c2 * b1)
            } else if((c2 * b1) % (c1 * b2) == 0){
                phase_shift.append("1/" + ((c2 * b1) / (c1 * b2)));
            } else {
                phase_shift.append((c1 * b2) + "/" + (c2 * b1));
            }
        } else if(c_div_pos != std::string::npos && b_div_pos == std::string::npos){ // for b is a number and c is a fraction
            if(c1 % (c2 * b1) == 0) {
                phase_shift.append(std::to_string(c1 / (c2 * b1)));
            } else if((c2 * b1) % c1 == 0){
                phase_shift.append("1/" + std::to_string((c2 * b1) / c1));
            } else {
                phase_shift.append(std::to_string(c1) + "/" + std::to_string(c2 * b1));
            }
        } else if(c_div_pos == std::string::npos && b_div_pos != std::string::npos) { // for b is a fraction and c is a number
            if(b1 % (b2 * c1) == 0) {
                phase_shift.append(std::to_string(b1 / (b2 * c1)));
            } else if((b2 * c1) % b1 == 0){
                phase_shift.append("1/" + std::to_string((b2 * c1) / b1));
            } else {
                phase_shift.append(std::to_string(b1) + "/" + std::to_string(b2 * c1));
            }
        } else { // b and c are numbers
            if(c1 % b1 == 0) {
                phase_shift.append(std::to_string(c1 / b1));
            } else if(b1 % c1 == 0){
                phase_shift.append("1/" + std::to_string(b1 / c1));
            } else {
                phase_shift.append(std::to_string(b1) + "/" + std::to_string(c1));
            }
        }
        
        if((b_pi == "pi" && c_pi == "n") || (b_pi == "n" && c_pi == "pi")) { // since c always have a pi
            phase_shift.append(" pi");
        }     
    } else {
        phase_shift = "0";
    }

    std::cout << "\t\tAmplitude: " << abs(a) << std::endl;
    std::cout << "\t\tPeriod: " << period << std::endl;
    std::cout << "\t\tHorizontal/Phase shift: " << phase_shift << std::endl;
    std::cout << "\t\tVertical shift: " << d << std::endl;
    std::cout << "\t\tNote: if the result of the fraction is not simplified, please simplify it on your own.\n\t\tI can\'t add that feature due to time constraints." << std::endl;
}

/*Function for getting formulas*/
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
    std::cout << "\t(5) Graph Values for Sine and Cosine" << std::endl;
    std::cout << "\t(6) Show all formulas" << std::endl;
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
                    Graph_Values_Cos_Sin();
                    flag = false;
                    break;
                case 6:
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
