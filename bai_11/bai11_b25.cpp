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
#define endl "\n"

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

int kadane(int a[], int n){
	int cnt = 0;
	int max_end_here = 0, res = 0;
	for(int i = 0; i < n; i++){
		max_end_here += a[i];
		res = max(res, max_end_here);
		max_end_here = max(0, max_end_here);
	}
	return res;
}

void solve(){
	int n, m; cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> a[i][j];
	}
	int res = INT_MIN;
	int tmp[n];
	for(int l = 0; l < m; l++){
		ms(tmp, 0);
		for(int r = l; r < m; r++){
			for(int i = 0; i < n; i++){
				tmp[i] += a[i][r];
			}
			res = max(res, kadane(tmp, n));
		}
	}
	cout << res << endl;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}