#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		set<char> se;
		for(char x : s){
			se.insert(tolower(x));
		}
		if(se.size() == 26)	cout << "YES\n";
		else cout << "NO\n";	
	}
	return 0;
}
