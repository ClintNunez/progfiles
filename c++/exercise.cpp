#include<iostream>

// TODO try catch for wrong input type ex. int num = n 

// No. 1 Answer function
int funWithReturnTypeAndArg(int num){
	int square = num * num;
	return square;
}

// No. 2 Answer function
// TODO research inline functions
inline int calculateSlopeInterceptFormula(int slope, int domain, int b){
	int y = (slope * domain) + b;

	std::cout << "y = " << "(" << slope << ")" << "(" << domain << ") " << "+ "<< b << std::endl;
	std::cout << "y = " << y << std::endl;

	return 0;
}

// No.3 Answer function
int factorial(int n){
	if(n > 1){
		return n * factorial(n-1);
	}else{
		return n;
	}
}

// TODO setup these answers in the main function

// No.4 Answer function
int getUserIntInputFunc(){
	int userInput = 0;
	std::cout << "Enter a number: ";
	std::cin >> userInput;
	return userInput;
}

// No.5 Answer function
float calcInterest(int, int, int);
float calcInterest(int x, int y, int z = 1){
	float calcInterest;
	calcInterest = (x*y*x)/100;
	return calcInterest;
}

// No.6 Answer function




int main(){
	// Variables for switch
	int itemChoice = 0;
	char repeat = 'y';

	// Variables for No. 1
	int input = 0;
	int result;

	// Variables for No. 2
	float _slope, _domain, _b;

	// Variables for No. 3
	int factorialInput = 0;
	int factorialResult = 0; 
	
	// Variables for No. 4
	int getUserIntInput = 0;

	do{
		std::cout << "Enter item number: ";
		std::cin >> itemChoice;
			
		switch(itemChoice){
			case 1:
				// No. 1 Function with return type and argument
				std::cout << "Enter a number: ";
				std::cin >> input;
				std::cout << input << std::endl;
				result = funWithReturnTypeAndArg(input);
				std::cout << result << std::endl;
				std::cout << "Square: " << result << std::endl;
				break;
			case 2:		
				// No. 2 Inline function
				std::cout << "Enter slope, domain, and b: ";
				std::cin >> _slope >> _domain >> _b;
				calculateSlopeInterceptFormula(_slope, _domain, _b); 
				break;
			case 3:
				// No. 3 Recursive function
				std::cout << "Get factorial of: ";
				std::cin >> factorialInput;
				factorialResult = factorial(factorialInput);
				std::cout << "Factorial of " << factorialInput << " is " << factorialResult << std::endl;
				break;
			case 4:
				// No. 4 Function with return type and no argument
				getUserIntInput = getUserIntInputFunc();
				std::cout << "User input: " << getUserIntInput << std::endl;
				break;
			case 5:
				// No. 5 Default Argument and Calculates Simple Interest.

				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
            break;
		}

		std::cout << "Enter any character except n/N to continue: ";
		std::cin >> repeat;

		// TODO add code to lowercase repeat
		//if(repeat != 'y' && repeat != 'n'){
			//while(repeat != 'y' && repeat != 'n'){
			//	std::cout << "Please input only y or n!" << std::endl;
		//		std::cout << "Check another item? (y/n) ";
		//		std::cin >> repeat;
	//		}
	//	}	
		 
	}while(repeat != 'n');
	
	std::cout << "Quiting." << std::endl;


	return 0;
}
