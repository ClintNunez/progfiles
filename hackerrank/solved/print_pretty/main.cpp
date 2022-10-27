#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int T; cin >> T;

    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

        // A
        cout << nouppercase << showbase << hex << left << (long)A << endl;
        // B
        cout << setw(15) << setprecision(2) << setfill('_') << showpos << fixed << right << B << endl;
        // C
        cout << setprecision(9) << noshowpos << uppercase  << scientific << C << endl;
    }

    return 0;
}
