#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N, X, Q, Y;
	cin >> N;
	vector<int> v;

	if(N >= 1 && N <= 100000){
		for(int i = 0; i < N; i++) {
			cin >> X;
			if(X >= 1 && X <= 1000000000){
				v.push_back(X);
			}
		}
	}

    cin >> Q;
    if(Q >= 1 && Q <= 100000){
        for(int j = 0; j < Q; j++) {
            cin >> Y;
            if(Y >= 1 && Y <= 1000000000) {
                auto itr = lower_bound(v.begin(), v.end(), Y);
                if(Y == * itr) {
                    cout << "Yes " << (itr - v.begin() + 1) << endl;
                } else {
                    cout << "No " << (itr - v.begin() + 1) << endl;
                }
            }
        }
	}
	return 0;
}
