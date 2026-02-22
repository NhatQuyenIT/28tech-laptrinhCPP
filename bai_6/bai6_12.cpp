#include <iostream>
#include <iomanip>
using namespace std;

int tong(int n){
	return n * (n+1)/2;
}
int main(){
	int a = 10;
	int S = tong(a);
	cout << S << endl;
	return 0;
}
