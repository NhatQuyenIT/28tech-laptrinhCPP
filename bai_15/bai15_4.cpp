#include <bits/stdc++.h>
#include <set>
using namespace std;


int main(){
	set<int> s;
	for(int i = 0; i < 10; i++){
		s.insert(i);
	}
	for(int x : s){
		cout << x << " ";
	}
	cout << endl;
//	s.erase(5);
//	for(int x : s){
//		cout << x << " ";
//	}
	s.erase(s.find(5));
	for(int x : s){
		cout << x << " ";
	}
	return 0;
}
