#include <iostream>
#include <iomanip>
using namespace std;

//s = 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/n

float tong(int n){
	float res = 0;
	for (int i = 1; i <= n; i++){
		res += 1.0/i;
	}
	return res;
}
int main(){
	int so;
	cin >> so;
	cout << tong(so) << endl;
	return 0;
}
