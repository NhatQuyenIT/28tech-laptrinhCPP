#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gt (ll n){
	ll res = 1;
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
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}
