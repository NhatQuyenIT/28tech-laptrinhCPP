#include <bits/stdc++.h>
#include <set>
using namespace std;


int main(){
	multiset<int> ms;
	ms.insert(100);
	ms.insert(200);
	ms.insert(100);
	ms.insert(200);
	ms.erase(100); // xoa het cac phan tu co gia tri la 100 trong set.
	for(int x : ms){
		cout << x << " ";
	}
	return 0;
}
