#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<char, bool> mp;
		for(char x : s){
			mp[tolower(x)] = true;
		}
		if(mp.size() == 26)	cout << "YES\n";
		else cout << "NO\n";	
	}
	return 0;
}
