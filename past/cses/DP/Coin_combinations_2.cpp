#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    vector<vector<int> > dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= x; j++)
        {
            int notTaken = dp[i + 1][j];
            int taken = 0;
            if (A[i] <= j)
                taken = dp[i][j - A[i]];

            dp[i][j] = (notTaken + taken) % MOD;
        }
    }

    cout << dp[0][x] << endl;
}
int main()
{
    solve();
}
