#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int max = a , min = a;
	if ( b < min) min = b;
	if ( c < min) min = c;
	if ( b > max) max = b;
	if ( c > max) max = c;
	cout << max << " " << min << endl;
//	if ( a > b && a > c){
//		max = a;
//	} else if (b > a && b > c){
//		max = b;
//	} else{
//		max = c;
//	}
//	if ( a < b && a < c){
//		min = a;
//	} else if ( b < a && b < c){
//		min = b;
//	} else {
//		min = c;
//	}
	return 0;
}
