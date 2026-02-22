#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

const int max_n = 1000;
int a[max_n];
map<int, int> mp;

void solve(int n){
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			mp[i]++;
			if(i != n / i)
			mp[n / i]++;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 0; i < n; i++){
		cin >> a[i];
		solve(a[i]);	
		}
		int res = 1;
		for(auto it : mp){
			if(it.second >= 2){
				res = it.first;
			}
		}		
//		int res = 1;
//		for(int i = 0; i < n; i++){
//			for(int j = i+1; j < n; j++){
//				res = max(res, gcd(a[i], a[j]));
//			}	
//		}
		cout << res << endl;
		mp.clear();		
	}
	return 0;
}
