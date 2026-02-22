#include <iostream>
#include <iomanip>
using namespace std;

void xinchao(){
	cout << "Xin chao !\n";
}

int main(){
	xinchao(); // loi goi ham
	for (int i = 1; i <= 50; i++){
		xinchao();
	}
	return 0;
}
