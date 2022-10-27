#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// TODO use iterators and addresses
// 8 1 1 2 2 6 9 9 15 4 1 4 9 15
// 9 2 4 6 8 9 10 13 15 15 3 11 14 7
int main(){
	int N, X, Q, Y;
	cin >> N;
	vector<int> v;
	if(N >= 1 && N <= 100000){
		for(int i = 0; i < N; i++){
			cin >> X;
			if(X >= 1 && X <= 1000000000){
				v.push_back(X);
			}
		}
	}

    cin >> Q;
    bool flag = false; int index; // inital solution for Y is in the vector
    int currentDiff, smallestDiff = -1; // initial solution for Y is not in the vector
    if(Q >= 1 && Q <= 100000){
        for(int j = 0; j < Q; j++) {
            cin >> Y;
                if(Y >= 1 && Y <= 1000000000) {
                //for(vector<int> iterator = v.begin(); iterator != v.end(); iterator++){
                   //if(*iterator == Y){

                //}
                // use binary sort
                    for(int k = 0; k < N; k++) {
                        if(Y == v.at(k)){
                            cout << "reached" << endl;
                            flag = true;
                            index = k + 1;
                            break;
                        }
                    }

                // HERE ARE WHERE THE PROBLEM HAPPENS
                if(flag) {
                   cout << "Yes " << index << endl;
                   flag = false;
                }else {
                   for(int k = 0; k < N; k++){
                      if(Y < v.at(k) && smallestDiff == -1){
                        smallestDiff = v.at(k) - Y;	
                         index = k + 1;
                      } else if(Y < v.at(k)){
                         currentDiff = v.at(k) - Y;
                         if(currentDiff < smallestDiff){
                            smallestDiff = currentDiff;
                            index = k + 1;
                         }
                      }
                   }
                   smallestDiff = -1;
                   cout << "No " << index << endl;
                }
             }
          }
	}
	return 0;
}
