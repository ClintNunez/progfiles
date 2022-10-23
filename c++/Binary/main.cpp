#include<iostream>
#include<vector>
#include<string>

std::vector<int> binary;

// TODO Use class after
// search the benefits of inline function

int binaryToDecimal(){
	
	return 0;
}

const std::string ACTIONS[] = {
	"1) Binary to Decimal"
};

// initial solution for getting the binary input (string => each char to int => binary.push_back(each char)
int main(){
	char choice;
	std::string binaryInput; int binaryInputSize;
	
	do{
		std::cout << "Enter a Binary number: ";
		std::cin >> binaryInput;
		binaryInputSize = binaryInput.std::string::size();

		for(int i = 0; i < binaryInputSize; i++){
			binary.push_back(binaryInput[i]); // convert char to int
		}

		for(std::vector<int>::iterator eachBit = binary.begin(); eachBit != binary.end(); eachBit++){
			std::cout << *eachBit;
		}

		std::cout << "Input another binary(y/n)? "; // Check if this is better or just use a sentinal value
		std::cin >> choice; // convert it to small case
		
		while(choice != 'y' or choice != 'n'){
			std::cout << "Choose between y/n only: ";
			std::cin >> choice;
		}		

	}while(choice != 'n');

	return 0;
}

