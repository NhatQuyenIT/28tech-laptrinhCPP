#include <bits/stdc++.h>
using namespace std;


int main(){
//	pair<pair<int,int>, int> v;
	tuple<int, int, int> t{1,2,3};
	cout << get<2>(t) << endl;
	return 0;
}
