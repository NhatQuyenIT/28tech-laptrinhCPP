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
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		int a[105][105];
		for(int i = 0; i < n; i++){
			for(int j = 0; j <n; j++) cin >> a[i][j];
		}
		int cnt = 0;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			mp[a[0][i]] = 1;
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < n; j++){
				if(mp[a[i][j]] == i){
					mp[a[i][j]]++;
				}
			}
		}
		for(auto it : mp){
			if(it.se == n){
				++cnt;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}


