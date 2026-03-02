#include <bits/stdc++.h>
#include <set>
using namespace std;


int main(){
	multiset<int> ms;
	ms.insert(100);
	ms.insert(200);
	ms.insert(100);
	ms.insert(200);
	cout << ms.size() << endl;
	for(int x : ms){
		cout << x << " ";
	}
	cout << ms.count(100) << endl;
	return 0;
}
