#include<iostream>
#include<vector>

using namespace std;

vector<int> m;

void SieveOfEratosthenes(int n) {
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p * p <= n; p++) {
        if(prime[p]) {
            for(int i = p*p; i <= n; i += p) {
                prime[p] = false;
            }
        }
    }
}

int main() {
    cout << "Enter dimensions of matrix: ";
    int D; cin >> D;

    int arr[D][D];

    int x = D/2, y = D/2, direction = 0, n = 1, repeat = 2;
    arr[x][y] = n;
    
    // Use printf or formatters
    for(int i = 1; i < D; i++) { //very inefficient
        if(i == (D-1)) repeat = 3;
        for(int j = 0; j < repeat; j++) {
            for(int k = 0; k < i; k++) {
                switch(direction) {
                    case 0:
                        // move up
                        n++;   
                        x -= 1;
                        arr[x][y] = n;
                        break;
                    case 1:
                        // move left
                        n++;   
                        y -= 1;
                        arr[x][y] = n;
                        break;
                    case 2:
                        // move down
                        n++;
                        x += 1; 
                        arr[x][y] = n;
                        break;
                    case 3:
                        // move right
                        n++;   
                        y += 1;
                        arr[x][y] = n;
                        break;
                }
            }
            if(direction == 3) {
                    direction = 0;
            } else {
                    direction++;
            }
        }
    }
    
    //print matrix
    for(int i = 0; i < D; i++) {
        for(int j = 0; j < D; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   return 0;
}
