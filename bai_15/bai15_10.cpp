#include <bits/stdc++.h>
#include <set>
using namespace std;

//Cho mang co n phan tu va so nguyen k, doi voi moi day con lien tiep co chieu k
//In ra duoc phan tu lon nhat trong day con do.
//10 3
// 1 2 3 1 4 5 1 8 9 10
// Output: 3 3 4 5 5 8 9 10 ( 1 2 3 thi lay 3, 2 3 1 lay 3, 3 1 4 lay 4,...)
int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	multiset<int> ms;
	for(int i = 0; i < k; i++){
		ms.insert(a[i]);
	}
	for(int i = k; i < n; i++){
		cout << *ms.rbegin() << " ";
		ms.erase(ms.find(a[i-k]));
		ms.insert(a[i]);
	}
	cout << *ms.rbegin() << endl;
	return 0;
}
