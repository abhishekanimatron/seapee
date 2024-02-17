#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
#define double long double
#define fo(i, n) for (i = 0; i < (n); ++i)
#define repA(i, j, n) for (i = (j); i <= (n); ++i)
#define repD(i, j, n) for (i = (j); i >= (n); --i)
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

bool possi(int i, int j, vector<vector<char>> &space, string &move)
{
    if (space[i][j] == '#')
        return false;
    for (char c : move)
    {
        if (c == 'L')
        {
            j--;
        }
        else if (c == 'R')
        {
            j++;
        }
        else if (c == 'U')
        {
            i--;
        }
        else
        {
            i++;
        }
        if(space[i][j]=='#')return false;
    }
    return true;
}

void solve()
{
    int h, w, n;
    cin >> h >> w >> n;
    string move;
    cin >> move;
    vector<vector<char>> space(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char c;
            cin >> c;
            space[i][j] = c;
        }
    }
    int cnt = 0;
    for (int i = 1; i < h - 1; i++)
    {
        for (int j = 1; j < w - 1; j++)
        {
            if (possi(i, j, space, move))
                cnt++;
        }
    }
    cout << cnt << endl;

    // for (auto i : space)
    // {
    //     for (auto j : i)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
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