#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int t, n;
	cin >> t >> n;
	if ( t <= 0 || t > 12 || n <= 0){
		cout << "INVALID\n";
	} else{
		if ( t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12){
			cout << "Co 31 ngay!";
		} else if (t == 4 || t == 6 || t == 9 || t == 11){
			cout << "Co 30 ngay!";
		} else if ( (n%400 == 0) || (n % 4 == 0 && n % 100 != 0)){
			cout <<"Co 29 ngay!";
		} else{
			cout << "Co 28 ngay!";
		}
	}
	return 0;
}
