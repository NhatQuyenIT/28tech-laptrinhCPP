#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

// (key, value)
// count
// find
int main(){
	map<int, int> mp;
	mp[100] = 200; //(100,200)
	mp[200] = 300;
	mp.insert({300,400});
	mp.insert({400,500});
//	if(mp.count(500) != 0){
	if(mp.find(500) != mp.end()){
		cout << "Found !\n";
	}
	else{
		cout << "Not Found !\n";
	}
	return 0;
}
