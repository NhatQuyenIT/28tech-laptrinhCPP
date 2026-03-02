#include <bits/stdc++.h>
#include <set>
using namespace std;
// O(logn)
//insert
//size
// cac phan tu trong set phai rieng biet, khong duoc giong nhau.
// find
// count
int main(){
	set<int> s;
	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(100);
	s.insert(200);
	cout << s.size() << endl;
	return 0;
}
