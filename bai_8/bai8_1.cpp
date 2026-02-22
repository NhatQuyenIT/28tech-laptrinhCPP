#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a[100];
	long long x[100];
	float b[100];
	double c[200];
	char y[300];
	
	int z[10] = {10,9,8,7,6,5,4,3,2,1}; // Chi so bat dau tu 0, tuc la z[0] -> n-1: z[9]
	cout << z[2] << endl;
	
	int m[10000];
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> a[i]; // nhap gia tri cho phan tu 0 -> i
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		cout << a[i] << " " << endl;
		sum += a[i];
	}
	cout << sum << endl;
	
	for(int i = n-1; i >= 0; i--){
		cout << a[i] << " " << endl;
	}
	return 0;
}
