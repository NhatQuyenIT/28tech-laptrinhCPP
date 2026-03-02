#include <bits/stdc++.h>
#include <set>
using namespace std;


int main(){
	set<int> s;
	for(int i = 0; i < 10; i++){
		s.insert(i);
	}
//	for(int x : s){
//		cout << x << " ";
//	}
//	cout << endl;
//	cout << *s.begin() << endl;
//	cout << *s.rbegin() << endl;
//	for(auto x : s){
//		cout << x << endl;
//	}
	for(set<int>::iterator it = s.begin(); it != s.end(); ++it){
		cout << *it << " ";
	}
	return 0;
}
