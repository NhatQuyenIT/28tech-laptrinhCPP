#include <iostream>
#include <iomanip>
using namespace std;

// Function overloading
int tong(int a, int b){
	return a + b;
}
float tong (float a, float b){
	return a + b;
}
long long tong (long long a, long long b){
	return a + b;
}
int main(){
	int n = 100, m = 200;
	cout << tong(n,m) << endl;
	float n = 100.1, m = 200.2;
	cout << tong(n,m) << endl;
	return 0;
}
