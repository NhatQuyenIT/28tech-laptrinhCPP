#include <bits/stdc++.h>
using namespace std;

// vector<int> v
// vector<int> v(n)
// vector<int> v(n,value)
int main(){
	int n; cin >> n;
	vector<int> v(n,100);
	for(int i = 0; i < n; i++){
		cout << v[i] << endl;
	}
	v.push_back(20);
	return 0;
}
