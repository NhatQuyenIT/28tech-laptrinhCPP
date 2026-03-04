#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<string, int> mp;
		stringstream ss(s);
		string word;
		while(ss >> word){
			mp[word] = true;
		}
		cout << mp.size() << endl;	
	}
	return 0;
}
