#include <iostream>
#include <iomanip>
using namespace std;

void tang(int n){
	n += 100;
}
int main(){
	int a = 1000;
	tang(a);
	cout << a << endl;
	return 0;
}
