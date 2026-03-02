#include <bits/stdc++.h>
#include <set>
using namespace std;

//find
//count 
// Erase
int main(){
	set<int> s;
	for(int i = 0; i < 10; i++){
		s.insert(i);
	}
	cout << s.size() << endl; // 0 - 9
//	if(s.count(5) != 0){
	if(s.find(5) != s.end()){
		cout << "Found!\n";
	}else{
		cout << "Not Found!\n";
	}
	return 0; 
}
