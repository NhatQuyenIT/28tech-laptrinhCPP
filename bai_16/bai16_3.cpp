#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

// (key, value)
// count
// find
// erase
// Dem so lan xuat hien cua cac phan tu trong mang, sau do in ra kem theo tan suat cua no
// 8
// 1 1 2 1 3 5 1 -4
// Output
// -4 1 , -4 nho nhat nen xuat hien truoc va xuat hien 1 lan
// 1 4 , 1 xuat hien 4 lan
// 2 1 
// 3 1
// 5 1
int main(){
	map<int, int> mp;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp[x]++;
	}
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}
