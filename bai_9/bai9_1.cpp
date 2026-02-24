#include <bits/stdc++.h>
using namespace std;

void nhap(int a[][100], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
}

int main(){
//	int a[5][10] = {{1,2,3} , {4,5,6}};
	int n, m; cin >> n >> m;
//	int a[n][m];
//	int a[100][100];
//	nhap(a,n,m);
	char c[100][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> c[i][j];
		}
	}
	//Duyet theo hang
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
