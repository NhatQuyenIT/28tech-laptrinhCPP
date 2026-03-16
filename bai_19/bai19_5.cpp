#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//stable_sort: bubble_sort, insertion_sort, merge_sort
// Sap xep cac phan tu trong mang theo thu tu tang dan ve gia tri tuyet doi
//8
//1 2 1 5 -2 -5 -1 4
// Output: 1 1 -1 2 -2 4 5 -5

bool cmp(int a, int b){
//	if(a > b)
//		return true;
//	else
//		return false;
	return abs(a) < abs(b);
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	stable_sort(a, a + n, cmp);
//	sort(a, a + n, cmp);
	for(int x : a){
		cout << x << " ";
	}
	return 0;
}
