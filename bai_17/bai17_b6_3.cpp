#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int a[26] = {0};
		for(char x : s){
			a[tolower(x) - 'a'] = 1;
		}
		int cnt = 0;
		for(int i = 0; i < 26; i++){
			cnt += a[i];
		}
		if(cnt == 26) cout << "YES\n";
		else cout << "NO\n";	
	}
	return 0;
}
