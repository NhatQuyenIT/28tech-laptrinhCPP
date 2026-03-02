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
	int a[1000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for( int i = 0; i < n; i++){
		if(mp[a[i]] != 0){
			cout << a[i] << " " << mp[a[i]] << endl;
			mp[a[i]] = 0;
		}
	}
	return 0;
}
