#include<iostream>

int main(){
	int n;
	std::cin >> n;
	int arr[n];

	for(int i = 0; i < n; i++){
		std::cin >> arr[i];
	}

	int lpointer = n - 1, elem1 = 0, elem2 = 0, middle = n/2;

	for(int j = 0; j < middle; j++){
		elem1 = arr[j];
		elem2 = arr[j + lpointer]; // 0 + 5, 1 + 3, 2 + 1
		arr[j + lpointer] = elem1;
		arr[j] = elem2;

		lpointer -= 2;
	}

	//print result
	for(int k = 0; k < n; k++){
		std::cout << arr[k] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
