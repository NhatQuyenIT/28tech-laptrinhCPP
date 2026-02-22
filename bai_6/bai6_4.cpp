#include <bits/stdc++.h>
using namespace std;

void xinchao(int n, float b, char c){ //truyen tham so
	cout << n << " " << b << " " << c << endl;
}

void printnumber(int so){
	cout << so << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
//	xinchao(20, 2.5, '@'); // doi so
//	xinchao(100, 3.2, '#'); // doi so
	printnumber(2);
	printnumber(3.8);
	printnumber('A');
	return 0;
}
