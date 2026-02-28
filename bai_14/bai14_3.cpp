#include <bits/stdc++.h>
using namespace std;


int main(){
	tuple<string, int, string> t = make_tuple("java", 100, "Python");
	cout << get<0>(t) << endl;
	cout << get<1>(t) << endl;
	cout << get<2>(t) << endl;
	return 0;
}
