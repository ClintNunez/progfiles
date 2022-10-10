#include<iostream>

using namespace std;

int main(){
	int n, t; char c;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> t >> c;
		if(c == '*' || c == '@' || c == '#'){
			for(int j = 0; j < t; j++){
				cout << c;
			}
			cout << endl;
		} else {
			cout << "Cannot Print!" << endl;
		}
	}

	return 0;
}
