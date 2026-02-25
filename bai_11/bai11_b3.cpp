#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[500][500];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) cin >> a[i][j];
		}
		long long ans = -1e18;
		vector<int> row; // luu cac hang co tong lon nhats
		for(int i = 0; i < n; i++){
			// tinh tong cac phan tu o hang thu i
			long long sum = 0;
			for(int j = 0; j < m; j++){
				sum += a[i][j];
			}
			if(sum > ans){
				ans = sum;
				row.clear();
				row.push_back(i);
			}
			else if (sum == ans){
				row.push_back(i);
			}
		}
		cout << ans << endl;
		for(int x : row){
			cout << x + 1 << " ";
		}
		cout << endl;
	}
	return 0;
}
