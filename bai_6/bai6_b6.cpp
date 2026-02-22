#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
	int x; cin >> x;
	for (int i = 1; i <= x; i++){
		ll n; cin >> n;
		cout << sum_digit(n) << " " <<endl;
	}
	return 0;
}
