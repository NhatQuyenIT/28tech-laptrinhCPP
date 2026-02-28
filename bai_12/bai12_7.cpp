#include <iostream>
#include <iomanip>
using namespace std;

int main(){
//	string a = "123456";
//	int x = stoi(a);
//	cout << x << endl;
string a = "123456789123456";
long long x = stoll(a);
cout << x << endl;

float n = 123.456;
string s = to_string(n);
cout << s << endl;
	return 0;
}
