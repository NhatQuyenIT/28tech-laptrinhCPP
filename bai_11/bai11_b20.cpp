#include <bits/stdc++.h>
using namespace std;

void TC() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int h1 = 0, h2 = n - 1;
    int c1 = 0, c2 = m - 1;

    while (h1 < h2 && c1 < c2) {
        int pre = a[h1 + 1][c1];

        // Hàng trên
        for (int i = c1; i <= c2; i++) {
            int cur = a[h1][i];
            a[h1][i] = pre;
            pre = cur;
        }
        h1++;

        // C?t ph?i
        for (int i = h1; i <= h2; i++) {
            int cur = a[i][c2];
            a[i][c2] = pre;
            pre = cur;
        }
        c2--;

        // Hàng du?i
        if (h1 <= h2) {
            for (int i = c2; i >= c1; i--) {
                int cur = a[h2][i];
                a[h2][i] = pre;
                pre = cur;
            }
            h2--;
        }

        // C?t trái
        if (c1 <= c2) {
            for (int i = h2; i >= h1; i--) {
                int cur = a[i][c1];
                a[i][c1] = pre;
                pre = cur;
            }
            c1++;
        }
    }

    // In ma tr?n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        TC();
    }

    return 0;
}
