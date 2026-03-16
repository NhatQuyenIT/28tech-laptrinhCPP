#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//sort
//stable_sort
// sort(a, a+n), sort (a+x, a+y) => a[x; y -1]
//sort(a.begin(), a.end()), sort(a.begin() + x, a.begin() + y) => a[x; y-1]
//greater<int>
int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
//	sort(a, a + n, greater<int>()); // a[x] => a[y] : sort(a+x, a+y+1)
	sort(a.begin(), a.end(), greater<int>());
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
