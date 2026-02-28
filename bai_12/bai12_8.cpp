#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "java.python.php.lap.trinh";
	stringstream ss(s);
	string tmp;
	int cnt = 0;
//	while(ss >> tmp){
//		++cnt;
//	}
//	cout << cnt << endl;
while(getline(ss,tmp,'.')){
	cout << tmp << endl;
}
	return 0;
}
