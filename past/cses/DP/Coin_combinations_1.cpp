#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
    }
    vector<vector<long> > dp(n, vector<long>(x + 1, 0));

    for (int i = 0; i <= x; i++)
    {
        if (i % coins[0] == 0)
            dp[0][i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            long notTaken = dp[i - 1][j];

            long taken = 0;
            if (coins[i] <= j)
                taken = dp[i][j - coins[i]];

            dp[i][j] = notTaken + taken;
        }
    }

    cout << dp[n - 1][x] << endl;
}
int main()
{
    solve();
}
