#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
	int n, q, k, currElement;

	std::cin >> n >> q; // n - size of vector, q - number of querries
	std::vector<int> a[n]; // a[n] - vector array with size n

	for(int i = 0; i < n; i++){ 
		std::cin >> k; // k - size of array to be added to a[i]
		for(int j = 0; j < k; j++){
			// TODO test if directly adding std::cin to push_back works.
			std::cin >> currElement;
			a[i].push_back(currElement);
		}
	}

	int arrIndex, elementIndex;
	for(int i = 0; i < q; i++){
		std::cin >> arrIndex >> elementIndex;
		std::cout << a[arrIndex].at(elementIndex) << std::endl;
	}

	return 0;
}
