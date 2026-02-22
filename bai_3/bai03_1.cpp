#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int x = -100;
	int y = abs(x); // gan gia tri tuyen doi cua x cho y
	cout << y << endl;
	
	// ham power (a,b): Tinh a ^ b va tra ve so double
	int a = 2;
	int b = 10;
	int res = pow(a,b);	
	cout << res << endl;
	
	//ham sqrt(n): Tinh can bac 2 cua n va tra ve so double
	int can = sqrt(16);
	cout << can << endl;
	
	//round(a): lam tron so thap thanh so nguyen
	int so = 2.55789;
	int kq = round(so);
	cout << kq << endl;
	return 0;
}
