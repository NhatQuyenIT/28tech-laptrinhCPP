#include <bits/stdc++.h>
using namespace std;


int main(){
	int n; cin >> n;
	string a[n];
	cin.ignore();
	for (int i = 0; i < n; i++){
		getline(cin, a[i]);
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
	return 0;
}
