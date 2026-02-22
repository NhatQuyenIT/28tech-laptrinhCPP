#include <iostream>

using namespace std;

int main(){
// Assignment Operator (Toan tu gan toan hang)
//	int a = 100;
//	cout << a << endl;
//	a = 200;
//	cout << a << endl;
	
//	int a, b, c;
//	cin >> a;
//	b = a;
//	cout << b << endl;
//	c = b;
//	cout << c << endl;	

// Cac phep toan tu trong toan hoc (+,-,*,/, %)
//	int  a = 500, b = 200;
//	int tong = a + b;
//	int hieu = a - b;
//	int tich = a * b;
//	float thuong = (float) a / (float) b; // 1 trong 2 hoac ca 2 deu phai ep kieu ve so thuc
//	//cach 2: float thuong = 1.0 * a / 1.0 * b;
//	int du = a % b;
//	cout << tong << " " << hieu << " " << tich << " " << thuong << " " << du << endl;
	
	// cach viet khac cua a = a + 1 hoac a = a - 1
//	int c = 100;
//	int d = c++; // gan c cho d la 100, sau do tang c len 101
//	int e = ++d; // tang d len truoc thanh 101 va gan vao e
//	cout << d << " " << e << endl;
//	
//	int x = c--; // gan c cho x la 101 (theo bo nho cu), sau do giam c con 100
//	int y = --c; // c bi giam truoc con 99 va sau do moi gan cho y
//	cout << x << " " << y << endl;
	
//	int a = 100 , b = 200;
//	// cach viet khac cua a = a + b
//	a += b; // a sau khi cong se la 300
////	a -= b;
////	a *= b;
////	a /= b;
////	a %= b;
//	cout << a << endl;


// Toan tu so sanh ( < , > , <= , >= , ==, !=) => tra ve 0 la false, 1 la true
//	int so_1 = 100, so_2 = 200;
//	bool sosanh = so_1 < so_2; // true: 1
//	bool ss = so_1 > so_2; // false: 0
//	bool so_3 = so_1 >= so_2;// false: 0
//	bool ketqua = so_1 <= so_2; // true: 1
//	bool kq = so_1 == so_2; // false: 0
//	bool result = so_1 != so_2; // true: 1
//	cout << sosanh << " " << ss << " " << so_3 << " " << ketqua << " " << kq << " " << result << endl;

// Toan tu Logic ( AND OR NOT ) && || !
// AND true khi ca 2 cung true, con lai la false
// OR false khi ca 2 cung false, con lai la true
	int a = 200, b = 200, c = 300, d = 400;
	int res_1 = (a <= b) && (c <= d); // true va true ra true *******
	int res_2 = (a <= b) && (c >= d); // true va false ra false
	int res_3 = !(a == b) || (c >= d); // fasle hoac false ra false ******
	int res_4 = (a >= b) || (c <= d); // true hoac true ra true
	cout << res_1 << " " << res_2 << " " << res_3 << " " << res_4 << endl;
	return 0;
}
