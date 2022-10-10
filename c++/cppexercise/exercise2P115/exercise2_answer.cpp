#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int factor1, factor2;
cout << "\n\n        "
	<< "   ****** MULTIPLICATION TABLE ******"
	<< endl;
cout << "\n\n\n";
for( factor2 = 1 ; factor2 <= 10 ; ++factor2 )
cout << setw(5) << factor2;
cout << "\n" << "-------------------------------------------" << endl;
for( factor1 = 1 ; factor1 <= 10 ; ++factor1 )
{
cout << setw(6) << factor1 << " |";
for( factor2 = 1 ; factor2 <= 10 ; ++factor2 )
cout << setw(5) << factor1 * factor2;
cout << endl;
}
cout << "\n\n\n";
// To shift up the table
return 0;
}
