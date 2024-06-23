#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
#define double long double
#define fo(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, j, n) for (int i = (j); i <= (n); ++i)
#define repD(i, j, n) for (int i = (j); i >= (n); --i)
#define all(x) begin(x), end(x)
#define eb emplace_back
#define X first
#define Y second
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
const int MOD = 1000000007;
const int MOD2 = 998244353;
const int INF = 1000000000;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    unordered_map<int, pair<int, int>> mp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            grid[i][j] = n * (i) + j + 1;
            mp[grid[i][j]] = {i, j};
        }
    }
    vector<int> turns(t);
    bool ach = false;
    vector<int> rowcnt(n, 0);
    vector<int> colcnt(n, 0);
    int d1cnt = 0;
    int d2cnt = 0;
    for (int i = 0; i < t; ++i)
    {
        cin >> turns[i];
        auto [x, y] = mp[turns[i]];
        grid[x][y] = 0;
        rowcnt[x]++;
        colcnt[y]++;
        if (x == y)
            d1cnt++;
        if (x + y == n - 1)
            d2cnt++;

        // Check if Bingo achieved
        if (rowcnt[x] == n || colcnt[y] == n || d1cnt == n || d2cnt == n)
        {
            ach = true;
            cout << (i + 1) << endl;
            return;
        }
    }
    if (ach == false)
    {
        cout << -1 << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}