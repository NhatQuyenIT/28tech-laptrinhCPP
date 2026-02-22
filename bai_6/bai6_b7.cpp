#include <bits/stdc++.h>
using namespace std;

bool check(long long n){
	int tong = 0;
	while(n){
		tong += n %10
		n /= 10
	}
//	if(tong % 10 = 8){
//		return true;
//	} else {
//		return false;
//	}
	return tong % 10 == 8;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	long long x; cin >> x;
	if(check(x)){
		cout << "28tech\n";
	} else {
		cout << "29tech\n";
	}
	return 0;
}
