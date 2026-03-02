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
	int max_fre = 0;
	string res;
	for(auto it : mp){
		if(it.second >= max_fre){
			max_fre = it.second;
			res = it.first;
		}
	}
	cout << res << " " << max_fre << endl;
	return 0;
}
