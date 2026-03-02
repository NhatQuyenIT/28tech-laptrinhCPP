#include <bits/stdc++.h>
#include <set>
using namespace std;

// unordered_set
int main(){
	unordered_set<int> s;
	for(int i = 0; i < 10; i++){
		s.insert(i);
	}
	for(int x : s){
		cout << x << endl;
	}
	return 0;
}
