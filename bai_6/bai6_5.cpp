#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int getNumber(int n){
	return n + 100;
}

int getMax(int a, int b){
	if (a > b){
		return a;
	} else{
		return b;
	}
}

int gt(int n){
	int res = 1;
	for (int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cout << getNumber(20) << endl;
	int kq = getNumber(100);
	cout << kq << endl;
	cout << getMax(10,20) << endl;
	cout << getMax (100,5) << endl;
	cout << gt(5) << endl;
}
