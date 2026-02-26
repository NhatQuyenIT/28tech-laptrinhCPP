#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
	

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n; cin >> n;
	int a[n][3];
	int ans = 0, cnt = 0;
	FOR(i, 0, n){
		cnt = 0;
		FOR(j, 0, 3){
			cin >> a[i][j];
			cnt += a[i][j];
		}
		if(cnt >= 2) ++ans;
	}
	cout << ans << endl;
	return 0;
}