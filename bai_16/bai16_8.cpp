#include <bits/stdc++.h>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
	unordered_map<int, int> mp; // unordermap khong luu duoc phan giong nhau
	mp.insert({1, 100});
	mp.insert({2, 200});
	mp.insert({1, 200});
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	cout << mp.count(1) << endl;
	return 0;
}
