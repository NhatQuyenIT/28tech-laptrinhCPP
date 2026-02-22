#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
//	int count = 0; // dem so luong chu so cua n
//	while (n!=0){
//		++count;
//		n /= 10;
//	}
//	cout << count << endl;
	
	int sum = 0; // tinh tong cac chu so cua n
	while (n!=0){
		sum += n %10;
		n /= 10;
	}
	cout << sum << endl;
	return 0;
}
