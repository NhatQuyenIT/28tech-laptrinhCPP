#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


//Tim vi tri dau tien cua 1 phan tu x trong 1 mang da sap xep
// 10 3
// 1 2 2 3 3 3 3 7 8 9

int first_pos(int a[], int n, int x){
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			//tim them o ben trai xem co con khong?
			r = m - 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

int last_pos(int a[], int n, int x){
	int res = -1;
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			//tim them o ben trai xem co con khong?
			l = m + 1;  
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

int main(){
	int n,x; cin >> n >> x;
	int a[n];
	for(int &x : a) cin >> x;
	cout << first_pos(a, n, x) << " " << last_pos(a, n, x) << endl;
	return 0;
}
