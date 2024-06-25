#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int solve(vector<int> &coins,int x)
{
    int n = coins.size();
    vector<vector<int> > dp(n, vector<int>(x + 1, 0));
    for (int i = 0; i <= x; ++i)
    {
        if (i % coins[0] == 0)
            dp[0][i] = i / coins[0];
        else
            dp[0][i] = 1e9;
    }

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j <= x; ++j)
        {

            int take = 1e9;
            int nottake = dp[i - 1][j];
            if (coins[i] <= j)
            {
                take = 1 + dp[i][j - coins[i]];
            }
            dp[i][j] = min(take, nottake);
        }
    }
    return dp[n-1][x];
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
    }
    int ans = solve(coins, x);
    if (ans == 1e9)
        ans = -1;
    cout << ans << endl;
    return 0;
}
