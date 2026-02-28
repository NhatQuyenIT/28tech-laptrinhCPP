#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	string s = "python";
	for(int i = 0; i < s.length(); i++){
		cout << s[i] << endl;
	}
	for(char x : s){
		cout << x << endl;
	}
	return 0;
}
