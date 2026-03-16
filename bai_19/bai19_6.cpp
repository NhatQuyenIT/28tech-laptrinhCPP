#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Sap xep cac tu theo thu tu chieu dai giam
// Trong truong hop 2 tu co cung chieu dai thi tu nao co thu tu tu dien nho hon se in truoc
// 5
// python java php c sql
// python java php sql c
bool cmp(string a, string b){
	if(a.length() != b.length()){
		return a.length() > b.length();
	}
	return a < b;
}
int main(){
	int n; cin >> n;
	string a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	for(string x : a){
		cout << x << " ";
	}
	return 0;
}
