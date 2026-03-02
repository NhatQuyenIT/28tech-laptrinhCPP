#include <bits/stdc++.h>
#include <set>
using namespace std;


int main(){
	set<int> s;
	for(int i = 0; i < 10; i++){
		s.insert(i);
	}
	s.erase(5);
	cout << s.size() << endl;
	return 0;
}
