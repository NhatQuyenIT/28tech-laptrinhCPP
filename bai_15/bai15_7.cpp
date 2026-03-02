#include <bits/stdc++.h>
#include <set>
using namespace std;

// Set co thu tu Order
int main(){
	int n; cin >> n;
	set<string> s;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string str;
		getline(cin, str);
		s.insert(str);
	}
	cout << s.size() << endl;
	for(string x : s){
		cout << x << endl;
	}
	return 0;
}
