#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//Tron 2 day con: day 1 [l, m]; day 2 [m+1, r]
int merge(int a[], int l, int m, int r){
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	int cnt = 0;
	while(i < x.size() && j < y.size()){
		if(x[i] <= y[j]){
			a[l] = x[i];
			++l;
			++i;
		}
		else{
			cnt += x.size() - i;
			a[l] = y[j];
			++l;
			++j;
		}
	}
	while(i < x.size()){
		a[l] = x[i];
		++l;
		++i;
	}
	while(j < y.size()){
		a[l] = y[j];
		++l;
		++j;
	}
	return cnt;
}
int mergeSort(int a[], int l, int r){
	int dem = 0;
	if (l < r){
		int m = (l+r)/2;
		dem += mergeSort(a, l, m);
		dem += mergeSort(a, m + 1, r);
		dem += merge(a, l, m, r);
	}
	return dem;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n = 10000;
		int a[10000];
		srand(time(NULL));
		for(int i = 0; i < n; i++){
			a[i] = rand() % 1000;
		}
		
		int cnt = 0;
	//	int a[6] = {8,7,1,9,2,3};
	//	cout << mergeSort(a,0,5) << endl;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] > a[j])
				++cnt;
			}
		}
		int ans = mergeSort(a, 0, n - 1);
		cout << cnt << " " << ans << endl;	
	}
	
	return 0;
}
