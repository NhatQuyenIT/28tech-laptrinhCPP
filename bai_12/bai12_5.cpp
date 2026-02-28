#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	string a = "abc";
	string b = "def";
//	if( a > b ){
//		cout << "a lon hon b\n";
//	} else if(a == b){
//		cout << "a giong b \n";
//	} else{
//		cout << "a nho hon b\n";
//	}
	cout << a.compare(b) << endl;
	return 0;
}
