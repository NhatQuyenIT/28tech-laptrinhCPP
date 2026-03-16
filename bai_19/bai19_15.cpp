#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r){
	int pivot = a[l]; // phan tu ben phai
	int i = l - 1, j = r + 1;
	while(1){
		do{
			++i;
		}while(a[i] < pivot);
		do{
			--j;
		}while(a[j] > pivot);
		if(i < j){
			swap(a[i], a[j]);
		}
		else return j;
	}
}
void quicksort(int a[], int l, int r){
	if(l >= r) return;
	int p = partition(a, l, r);
	quicksort(a, l, p);
	quicksort(a, p+1, r);
}
int main(){
	int a[1000], n; cin >> n;
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		a[i] = rand() % 1000;
	}
	quicksort(a, 0, n-1);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
