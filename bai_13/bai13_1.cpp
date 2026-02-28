#include <bits/stdc++.h>
#include <vector>
using namespace std;

// cu phap vector<kieu du lieu> ten_vector
//ham push_back()
// size(): kich thuoc vector
// truy cap cac phan tu trong vector thong qua chi so

int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout << v.size() << endl;
	v.push_back(40);
	cout << v.size() << endl;
	cout << "Phan tu dau tien trong vector: " << v[0] << endl;
	cout << "Phan tu cuoi cung trong vector: " << v[v.size() - 1] << endl;
	cout << "Phan tu cuoi cung trong vector: " << v.back() << endl;
	return 0;
}
