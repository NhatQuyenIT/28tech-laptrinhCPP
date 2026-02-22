#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i,n;
	cin >> n;
	int s = 0;
	for (i = 1; i <= n; i++){
		s += i;
	}
	cout << s << endl;
	return 0;
}
