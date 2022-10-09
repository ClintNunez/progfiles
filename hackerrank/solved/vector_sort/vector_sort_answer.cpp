#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector<int> v;
	int size, input;
	cin >> size;

	for(int i = 0; i < size; i++){
		cin >> input;
		v.push_back(input);
	}
	
	sort(v.begin(),v.end());

	for(int i = 0; i < size; i++){
		cout << v.at(i) << " ";	
	}
	
    	return 0;
}

