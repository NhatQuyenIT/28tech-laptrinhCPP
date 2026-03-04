#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int, bool> mp;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			mp[x] = true;
		}
		int q; cin >> q;
		while(q--){
			int x; cin >> x;
			if(mp.count(x) == 1){
				cout << "YES\n";
			}
			else cout << "NO\n";
		}
	}
	return 0;
}
