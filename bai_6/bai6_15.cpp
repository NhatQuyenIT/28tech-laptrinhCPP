#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// Kiem tra xem tong chu so cua 1 so co phai la so nguyen to hay khong?
//int tong(int n){
//	int sum = 0;
//	whille(n){
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
bool kiemtra_songuyento(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return n > 1;
}

int check(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	if(kiemtra_songuyento(sum)){
		return true;
	}
	else return false;
}
int main(){
	int n = 124;
	if(check(n))
		cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}
