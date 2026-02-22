#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//Xay dung ham kiem tra so nguyen to, tham so int
bool kiemtra_songuyento(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return n > 1;
}
int main(){
//	int n; cin >> n;
//	cout << kiemtra_songuyento(n) << endl;
	for (int i = 1; i <= 100; i++){
		if (kiemtra_songuyento(i)){
			cout << i << endl;
		}
	}
	return 0;
}
