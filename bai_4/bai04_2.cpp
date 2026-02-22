#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	int r;
	cin >> r;
	const double PI = 3.14;
	double chuvi = 2 * PI * r;
	double dientich = PI *  r * r;
	cout << fixed << setprecision(2) << chuvi << " " << dientich << endl;
	return 0;
}
