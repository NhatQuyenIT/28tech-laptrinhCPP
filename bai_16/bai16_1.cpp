#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

// (key, value)
int main(){
	map<int, int> mp;
	mp[100] = 200; //(100,200)
	mp[200] = 300;
	mp.insert({300,400});
	mp.insert({400,500});
	cout << mp.size() << endl;
	mp[100] = 300; // thay key 100 bang value 300, chu khong them moi
	cout << mp.size() << endl;
	for(pair<int,int> x : mp){
		cout << x.first << " " << x.second << endl;
	}
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	for(map<int,int>::iterator it = mp.begin(); it != mp.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}
	return 0;
}
