#include <iostream>
#include <iomanip>
using namespace std;

int tang(int &n){
	++n;
}


int main(){
	int a = 124;
	tang(a);
	cout << a << endl;
	return 0;
}
