#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y, int z){
	cout << "28tech.com.vn\n";
	cout << 2*x << " " << 3*y << " " << 4*z <<endl;
	return x*y*z;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int a,b,c;
	cin >> a >> b >> c;
	cout << solve(a,b,c) << endl;
	return 0;
}
