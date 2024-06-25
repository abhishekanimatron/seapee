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
lli tosub = 0;
vector<lli> findPeakGrid(vector<vector<lli>> &mat)
{
    int n = mat.size(), m = mat[0].size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            bool ispeak = true;
            if (i > 0 && mat[i][j] <= mat[i - 1][j])
                ispeak = false;
            if (i < n - 1 && mat[i][j] <= mat[i + 1][j])
                ispeak = false;
            if (j > 0 && mat[i][j] <= mat[i][j - 1])
                ispeak = false;
            if (j < m - 1 && mat[i][j] <= mat[i][j + 1])
                ispeak = false;
            if (ispeak)
            {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

void solve()
{
    lli n, m;
    cin >> n >> m;
    vector<vector<lli>> mat(n, vector<lli>(m));
    lli maxi = LLONG_MIN;
    fo(i, n)
    {
        fo(j, m)
        {
            cin >> mat[i][j];
            maxi = max(maxi, mat[i][j]);
        }
    }
    vector<lli> v = findPeakGrid(mat);
    lli gx = v[0], gy = v[1];
    lli cnt = 0;
    // cout << "peak at" << gx << ", " << gy << endl;
    while (gx != -1 && gy != -1)
    {
        // if (maxi > 1e3)
        // {

        lli xx = LLONG_MIN;
        if (gx > 0 && mat[gx][gy] > mat[gx - 1][gy])
            xx = max(xx, mat[gx - 1][gy]);
        if (gy > 0 && mat[gx][gy] > mat[gx][gy - 1])
            xx = max(xx, mat[gx][gy - 1]);
        if (gx < n - 1 && mat[gx][gy] > mat[gx + 1][gy])
            xx = max(xx, mat[gx + 1][gy]);
        if (gy < m - 1 && mat[gx][gy] > mat[gx][gy + 1])
            xx = max(xx, mat[gx][gy + 1]);
        if (xx != LLONG_MIN)
            mat[gx][gy] = xx;
        else
            mat[gx][gy] -= 1;
        vector<lli> v = findPeakGrid(mat);
        gx = v[0], gy = v[1];
    }
    fo(i, n)
    {
        fo(j, m)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    // cout << endl;
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