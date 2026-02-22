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
		long long sum = 0;
		for(int i = 0; i < n; i++) sum += a[i];
		long long left = 0;
		bool ok = false;
		for(int i = 0; i < n; i++){
			sum -= a[i];
			if(sum == left){
				cout << i << " ";
				ok = true;
			}
			left += a[i];
		}
		if(!ok) cout << "-1\n";
		else cout << endl;
	}
	return 0;
}
