#include <bits/stdc++.h>
using namespace std;

int sum_digit(long long n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	long long a; cin >> a;
	cout << sum_digit(a) << endll;
	return 0;
}
