#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(m, 0));

    // Kh?i t?o hàng d?u và c?t d?u
    for(int i = 0; i < n; i++)
        dp[i][0] = a[i][0];

    for(int j = 0; j < m; j++)
        dp[0][j] = a[0][j];

    int res = 0;

    // Tính DP
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(a[i][j] == 1){
                dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
            }
            else{
                dp[i][j] = 0;
            }
        }
    }

    // Tìm c?nh l?n nh?t
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res = max(res, dp[i][j]);
        }
    }

    cout << res << "\n";

    return 0;
}
