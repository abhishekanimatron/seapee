#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int m;
    cin >> m;
    unordered_map<int, int> mp;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            mp[i] = i + 1;
        }
        if (i == n - 1)
        {
            mp[i] = n - 2;
        }
        else
        {
            int left = abs(v[i - 1] - v[i]);
            int right = abs(v[i + 1] - v[i]);
            if (left < right)
                mp[i] = i - 1;
            else
                mp[i] = i + 1;
        }
    }
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (dp[x][y] != 0)
        {
            cout << dp[x][y] << endl;
            continue;
        }
        --x;
        --y;
        int coins = 0;
        if (x < y)
        {
            while (x < y)
            {
                if (dp[x][y] != 0)
                {
                    cout << dp[x][y] << endl;
                    continue;
                }
                if (mp[x] == x + 1)
                    coins++;
                else
                    coins += (v[x + 1] - v[x]);
                ++x;
            }
            dp[x][y] = coins;
        }
        else
        {
            while (x > y)
            {
                if (dp[x][y] != 0)
                {
                    cout << dp[x][y] << endl;
                    continue;
                }
                if (mp[x] == x - 1)
                    coins++;
                else
                    coins += (v[x] - v[x - 1]);
                --x;
            }
            dp[x][y] = coins;
        }
        cout << coins << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}