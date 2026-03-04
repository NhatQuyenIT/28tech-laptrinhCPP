#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n], b[m];
		for(int &x : a) cin >> x;
		map<int, bool> mp;
		for(int i = 0; i < m; i++){
			int x; cin >> x;
			mp[x] = true;
		}
		bool ok = false;
		for(int x : a){
			if(mp.find(x) == mp.end()){
				cout << x << " ";
				ok = true; // tim thay
			}
		}
		if(!ok) cout << "NOT FOUND\n";
		else cout << endl;		
	}
	return 0;
}
