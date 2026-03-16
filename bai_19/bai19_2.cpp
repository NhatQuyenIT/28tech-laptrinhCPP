#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
	int n; cin >> n;
	string a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n, greater<string>());
	for(string x : a){
		cout << x << " ";
	}
	return 0;
}
