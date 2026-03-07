#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Ap dung cho mang, vector duoc sap xep, set map
//lower_bound(iter1, iter2, key) [iter1, iter2) => Tra ve vi tri cua phan tu dau tien => key
//Neu ma tat ca cac phan tu trong mang deu nho hon key => iter2
// 7 9
// 1 3 4 5 6 7 8

// uper_bound(iter1, iter2, key) [iter1, iter2) => Tra ve vi tri dau tien cua phan tu > key
// 7 3
// 1 2 2 2 2 4 5

// Neu tat ca cac phan tu trong mang deu <= key => iter2
int main(){
	int n,x; cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
		auto it = upper_bound(a.begin(), a.end(), x); // tim vi tri dau tien cua phan tu => x nam trong mang a.
//		cout << *it << endl;
//		cout << it - a.begin() << endl;
//		cout << distance(a.begin(), it) << endl; // hoac cout << it - a.begin() << endl;
		if (it == a.end()){
			cout << "Khong co phan tu nao lon hon " << x << endl;
		}
	return 0;
}
