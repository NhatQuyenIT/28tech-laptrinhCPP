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
		cin >> n;
		for(int i = 0; i < n; i++){
		cin >> a[i];	
		}
		int res = 1, dem = 1;
		for(int i = 1; i < n; i++){
			if(a[i == a[i - 1]]){
				++dem;
			} else{
				dem = 1;
			}
			res = max(res, dem);
		}
		cout << n - res << endl;
	}
	return 0;
}
