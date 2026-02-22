#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int tong = a + b;
	int hieu = a - b;
	long long tich = (long long) a * b; // hoac 1ll a * b (1 long long)
	float thuong = (float) a / b;
	cout << tong << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong << endl;
//	cout << (a+b) << " " << (a-b) << " " << 1ll a * b << " " << fixed << setprecision(2) << 1.0 a/b << endl;
	return 0;
}
