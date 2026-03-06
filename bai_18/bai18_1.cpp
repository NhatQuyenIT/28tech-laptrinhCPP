#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//Linear search O(n)
// 10 3
// 1 2 8 9 0 7 6 5 3 0
bool ls(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x)
			return true;
	}
	return false;
}

//Binary search O(logn)
// Cac phan tu trong mang phai duoc sap xep tang dan, giam dan
// 10 3
// 1 2 3 4 5 6 7 8 9 10
bool bs(int a[], int n, int x){
	int l = 0, r = n - 1;
	while( l <= r ){
		int m = (l+r)/2;
		if(a[m] == x){
			return true;
		}
		else if(a[m] < x){ // thang dung giua nho hon x, thi phai tim o ben phai
			l = m + 1;
		}
		else{
			r = m - 1;
		}
	}
	return false;
}

bool binary_search(int a[], int l, int r, int x){
	if( l > r )
		return false;
	int m = (l+r)/2;
	if(a[m] == x)
		return true;
	else if(a[m] < x)
		return binary_search(a, m + 1, r, x);
	else
		return binary_search(a, l, m - 1, x);
}
int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(binary_search(a,0,n-1,x))
		cout << "Found!\n";
	else
		cout << "Not Found!\n";
	return 0;
}
