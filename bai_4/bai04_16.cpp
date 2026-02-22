#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long long n;
	cin >> n;
	// Cach 1:
	if ( (n % 3 == 0 ) && ( n % 5 == 0) ){ // de bai neu la hoac thi se la ||
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	
	// Cach 2:
	if ( n % 15 == 0 ){
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}
