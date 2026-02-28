#include <bits/stdc++.h>
using namespace std;

//Duyet thong qua index
// Duyet bang for each
// Duyet bang iterator
int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
//	for(int i = 0; i < v.size(); i++){
//		cout << v[i] << endl;
//	}
//	for (int x : v){
//		cout << x << endl;
//	}

//	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
//		cout << *it << endl;
//	}
	
//	for(auto it = v.begin(); it != v.end(); ++it){
//		cout << *it << endl;
//	}

	cout << v[2] << endl;
	cout << *(v.begin() + 2) << endl;
	return 0;
}
