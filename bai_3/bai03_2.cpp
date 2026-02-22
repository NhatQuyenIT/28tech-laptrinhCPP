#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//neu la dieu kien true thoa thi nhay vo { } de thuc hien tiep, con khong thoa thi thuc hien buoc ngoai.
//	if (100 > 50){
//		cout << "Xin chao !\n";
//	}

//	int n = 200;
//	if ((n%2) == 0){
//		cout << "Day la so chan ! \n";
//	}
	
//	if ((n >= 100) && (n <= 500)){
//		cout << "That la tuyet voi !\n";
//	}
//	
//	//luat ngam dinh trong c la 0 chinh la false, con so #0 se la true
//	if (n) {
//		cout << "N khac khong !";
//	}

//	int n;
//	cin >> n;
//	if ((n%2) == 0){
//		cout << "Day la so chhan ! \n";
//	} else {
//		cout << "Day la so le !\n";
//	}

//	int n;
//	cin >> n;
//	if ( n == 2 ){
//		cout << "Thu hai\n";
//	} else if (n == 3) {
//		cout << "Thu ba\n";
//	}else if (n == 4) {
//		cout << "Thu tu\n";
//	}else if (n == 5) {
//		cout << "Thu nam\n";
//	}else if (n == 6) {
//		cout << "Thu sau\n";
//	}else if (n == 7) {
//		cout << "Thu bay\n";
//	} else if (n == 8){
//		cout << "Chu nhat\n";
//	} else {
//		cout << "Du lieu khong hop le !\n";
//	}

//	if ((n==1) || (n==3) || (n==5) || (n==7) || (n==8) || (n==10) || (n==12)){
//		cout << "Co 31 ngay\n";
//	} else if (n == 2) {
//		cout << "Co 28 hoac 29 ngay";
//	} else if ((n==4) || (n==6) || (n==9) || (n==11)) {
//		cout << "Co 30 ngay\n";
//	} else {
//		cout << "Du lieu khong hop le !\n";
//	}

//	switch(n){
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			cout << "Co 31 ngay!\n";
//			break;
//			
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			cout << "Co 30 ngay!\n";
//			break;
//		case 2:
//			cout << "Co 28 hoac 29 ngay!\n;
//		default:
//			cout << "Du lieu khong hop le!\n";
//			break;
//	}
	
	int day = 4;
	switch (day) {
	  case 1:
	    cout << "Monday";
	    break;
	  case 2:
	    cout << "Tuesday";
	    break;
	  case 3:
	    cout << "Wednesday";
	    break;
	  case 4:
	    cout << "Thursday";
	    break;
	  case 5:
	    cout << "Friday";
	    break;
	  case 6:
	    cout << "Saturday";
	    break;
	  case 7:
	    cout << "Sunday";
	    break;
	default:
		cout << "Du lieu khong hop le!\n";
	}
	return 0;
}
