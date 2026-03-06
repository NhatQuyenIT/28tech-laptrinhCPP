#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


//binary_search(a+x, a+y, key) => a[x] => a[y-1]
//binary_search(a+1, a+4, key)
//binary_search(v.begin(), v.end(), key)
//binary_search(v.begin() + x, v.begin() + y, key) => v[x] => v[y-1]
int main(){
	int n, x; cin >> n >> x;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	if(binary_search(v.begin(), v.end(),x)){
//	if(binary_search(v.begin(), v.begin() + 4,x)){
		cout << "Found!\n";
	}else
		cout << "Not Found!\n";
	return 0;
}
