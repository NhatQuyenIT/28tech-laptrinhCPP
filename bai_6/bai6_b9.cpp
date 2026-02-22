#include <bits/stdc++.h>
using namespace std;

bool chua6(int n){
	int dem = 0;
	while(n){
		if (n%10 == 6){
			return true;
		}
		n /= 10;
	}
	return false;
}

bool tongchan(int n){
	int tong = 0;
	while(n){
		tong += n%10;
		n /= 10;
	}
	return tong % 2 == 0;
}
bool chanle(int n){
	int le = 0, chan = 0;
	while(n){
		if(n%2==0) ++chan;
		else ++le;
		n /= 10;
	}
	return le > chan;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int a,b;
	cin >> a >> b;
	if (chua((6) && tongchan(i) && chanle(i)){
		cout << i << " " << endl;
	}
}
