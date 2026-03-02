#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

//9
// python java string java python C++ sql sql java
//(string, int)
int main(){
	map<string, int> mp;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		mp[s]++;
	}
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}
