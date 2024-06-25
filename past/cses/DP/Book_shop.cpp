#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> price(n), pages(n);
    for (int i = 0; i < n; ++i)
        cin >> price[i];
    for (int i = 0; i < n; ++i)
        cin >> pages[i];
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = x; j >= 0; j--)
        {
            int cost = price[i - 1];
            int notake = dp[i - 1][j];
            int take = cost <= j ? dp[i - 1][j - cost] + pages[i - 1] : 0;
            dp[i][j] = max(take, notake);
        }
    }
    cout << dp[n][x] << endl;
}
int main()
{
    solve();
}
