#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<char, int> mp;
		for(char x : s){
			mp[x]++;
		}
		char res; int fre = 0;
		for(auto it : mp){
			if(it.second > fre){
				fre = it.second;
				res = it.first;
			}
		}
		cout << res << endl;		
	}
	return 0;
}
