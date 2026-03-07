#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Ap dung cho mang, vector duoc sap xep, set map
//lower_bound(iter1, iter2, key) [iter1, iter2) => Tra ve vi tri cua phan tu dau tien => key
//Neu ma tat ca cac phan tu trong mang deu nho hon key => iter2
// 7 2
// 1 2 2 3 4 5 6
// 7 2
// 1 3 4 5 6 7 8
int main(){
	int n,x; cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
		auto it = lower_bound(a, a + n, x); // tim vi tri dau tien cua phan tu => x nam trong mang a.
		cout << *it << endl;
		cout << it - a << endl;
	return 0;
}
