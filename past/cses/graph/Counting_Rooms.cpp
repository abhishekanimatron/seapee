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

void dfs(vector<vector<char>> &grid, vector<vector<bool>> &vis, int i, int j)
{
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '#')
        return;
    if (vis[i][j])
        return;
    vis[i][j] = true;
    dfs(grid, vis, i + 1, j);
    dfs(grid, vis, i - 1, j);
    dfs(grid, vis, i, j + 1);
    dfs(grid, vis, i, j - 1);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m, 0));
    fo(i, n)
    {
        fo(j, m)
        {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    fo(i, n)
    {
        fo(j, m)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                ++ans;
                dfs(grid, vis, i, j);
            }
        }
    }
    cout << ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    // int t = 1;
    // cin >> t;
    // while (t--){
    //     solve();
    // }
    return 0;
}