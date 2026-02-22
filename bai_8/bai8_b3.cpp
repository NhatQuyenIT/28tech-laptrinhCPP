#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
//		int res = INT_MAX;
//		for(int i = 0; i < n; i++){
//			for(int j = i + 1; j < n; j++){
//				res = min(res, max(a[i], a[j]) - min(a[i], a[j]) );
//			}
//		}
//		cout << res << endl;
		sort(a, a + n);
		int res = INT_MAX;
		for(int i = 1; i < n; i++){
			res = min(res, a[i] - a[i - 1]);
		}
		cout << res << endl;
	}
	return 0;
}
