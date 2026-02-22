#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char c;
	cin >> c;
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		cout << "Yes\n";
	} else cout << "No\n";
	return 0;
}
