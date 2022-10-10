#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int N, input, singleQuerry, rangeStart, rangeEnd, size;
	cin >> N;
	
	vector<int> v;

	for(int i = 0; i < N; i++){
		cin >> input;
		v.push_back(input);
	}
		
	cin >> singleQuerry;
	v.erase(v.begin() + (singleQuerry - 1));

	cin >> rangeStart >> rangeEnd;
	v.erase(v.begin() + (rangeStart - 1), v.begin() + (rangeEnd - 1));

	cout << v.size() << endl;
	for(int j = 0; j < v.size(); j++){
		cout << v.at(j) << " ";
	}

    	return 0;
}

