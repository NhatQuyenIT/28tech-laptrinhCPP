#include <bits/stdc++.h>
using namespace std;

using ll - long long;

void thaydoi(int n){ //Hoac void thaydoi(int &n), dung &n de tham chieu cung dia chi bo nho
	n += 1000;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int m = 20;
	thaydoi(m);
	cout << m << endl;// m = 20 khi nao cout << thaydoi(m) << endl thi moi la 1020
	// day duoc goi la deep copy trong lap trinh
}
