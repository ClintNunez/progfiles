#include<iostream>
#include<string>

int main(){
	int upTo;
	std::cout << "Enter limit of multiplication table: ";
	std::cin >> upTo;

	std::cout << "****** MULTIPLICATION TABLE ******" << std::endl;
	
	int spaceLength = std::to_string(10 * upTo).length(); 

	// for printing top row 
	for(int i = 1; i <= 10; i++){
		if(i == 1){
			for(int j = 0; j < spaceLength + 1; j++){
				std::cout << " ";
			}
			std::cout << i;
		}else {
			for(int j = 0; j < spaceLength; j++){
				std::cout << " ";
			}
			std::cout << i;
		}
	}
	std::cout << std::endl;

	// for printing each row
	for(int k = 1; k <= upTo; k++){
		std::cout << k;
		for(int l = 1; l <= 10; l++){
			for(int m = 0; m < spaceLength; m++){
				std::cout << " ";
			}
			std::cout << k * l;
		}
		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	return 0;
}
