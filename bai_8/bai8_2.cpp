#include <iostream>
#include <math.h>
using namespace std;

bool kt_songuyento(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return n>1;
}

int main(){
	int n; cin >> n;
	int a[n];
//	int mang[10] = {1,2,3};
//	for(int i = 0; i < n; i++){
//		cout << mang[i] << " " << endl;
//	}
	
//	int arr[10] = {0};
//	for(int i = 0; i < n; i++){
//		cout << arr[i] << " " << endl;
//	}
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
//	for(int i = 0; i < n; i++){
//		if(kt_songuyento(a[i])){
//			cout << a[i] << " ";
//		}
//	}
	
	for (int &x : a) cin >> x;
	for(int y : a){
		cout << y << " ";
	}
	return 0;
}
