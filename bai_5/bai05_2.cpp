#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i;
	int n = 100;
//	for ( i = 0 ; i <= n ; i++){
//		if (i%5==0){
//			cout << i << endl;
//		}
//	}
	for ( i = 0 ; i <= n ; i+=5){
		cout << i << endl;
	}
	for ( i = 0; i >= n ; i--){
		cout << i < endl;
	}
	return 0;
}
