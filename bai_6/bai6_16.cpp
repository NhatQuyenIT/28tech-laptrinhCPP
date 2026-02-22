#include <iostream>
#include <iomanip>
using namespace std;

int min(int a, int b){
	if (a<b)
	return a;
	else return b;
}
int main(){
	int x, y;
	cin >> x >> y;
	cout << min(x,y) << endl;
	return 0;
}
