#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	if ( n <= 0 ){
		cout << "INVALID\n";
	} else{
		if ((n % 400 == 0) || ((n % 4 == 0) && ( n % 100) != 0) ){
			cout << "YES\n";
		}
		else{
			cout <<"NO\n";
		}
	}
	return 0;
}
