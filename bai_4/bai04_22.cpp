#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char c;
	cin >> c;
	if (c >= '0' && c <= '9'){
		cout << "Yes\n";
	} else cout << "No\n";
	return 0;
}
