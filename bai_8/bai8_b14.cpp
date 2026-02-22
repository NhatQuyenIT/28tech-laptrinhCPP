#include <bits/stdc++.h>
using namespace std;

const int max_n = 1000000;
int a[max_n], n;
int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 0; i < n; i++){
		cin >> a[i];	
		}
		int ans = a[0];
		for (int i = 1; i < n; i++){
			ans ^= a[i];
		}
		cout << ans << endl;
	}
	return 0;
}
