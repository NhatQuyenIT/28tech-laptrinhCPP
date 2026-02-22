#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i,n;
	cin >> n;
	int s = 0;
	for (i = 1; i <= n; i++){
		if ( i % 3 == 0){
			s += i;
		}
	}
	// Cach 2:
//	for (i = 0; i <= n; i+=3){
//			s += i;
//	}
	cout << s << endl;
	return 0;
}
