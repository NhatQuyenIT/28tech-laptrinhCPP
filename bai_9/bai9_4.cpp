#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,m,k;
	cin >> n >> m >> k;
	int a[n][m][k];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << a[j][i] << " "; 
		}
		cout << endl;
	}
	return 0;
}
