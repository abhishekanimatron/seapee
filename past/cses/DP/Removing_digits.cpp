#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        string s = to_string(i);
        for (char c : s)
        {
            int digit = c - '0';
            if (digit == 0)
                continue;
            dp[i] = min(dp[i], dp[i - digit] + 1);
        }
    }
    cout << dp[n] << endl;
}
int main()
{
    solve();
}
