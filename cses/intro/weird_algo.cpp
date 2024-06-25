#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof dp);
    for (int i = 1; i <= m; ++i)
    {
        if (a[0] == 0 || a[0] == i)
            dp[1][i] = 1;
    }
    for (int i = 2; i <= n; ++i)
    {
        for (int k = 1; k <= m; ++k)
        {

            if (a[i - 1] != 0 && a[i - 1] != k)
            {
                dp[i][k] = 0;
                continue;
            }
            for (int p = k - 1; p <= k + 1; p++)
            {
                if (p >= 1 && p <= m)
                    dp[i][k] = (dp[i][k] + dp[i - 1][p]) % MOD;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; ++i)
    {
        ans = (ans + dp[n][i]) % MOD;
    }
    cout << ans << endl;
}
int main()
{
    solve();
}
