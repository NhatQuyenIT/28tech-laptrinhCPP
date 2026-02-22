#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void displayNumber(ll x, ll y, ll z){
    cout << y << " " << x << " " << z << endl;
    cout << x + y + z << endl;
    cout << "KET THUC !\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll a, b, c;
    cin >> a >> b >> c;
    displayNumber(a, b, c);
    return 0;
}

