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

void solve()
{
    int n;
    cin >> n;
    char mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    int ones = 0, idx = 0;
    for (int i = 0; i < n; i++)
    {
        ones = 0;
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == '1')
                ones++;
        }
        if (ones > 0)
        {
            idx = i;
            break;
        }
    }
    int onesss = 0;
    for (int j = 0; j < n; j++)
    {
        if (mat[idx + 1][j] == '1')
            onesss++;
    }
    // cout<<"pre: "<<ones<<endl;
    // cout<<"nex: "<<onesss<<endl;
    if (onesss == ones)
    {
        cout << "SQUARE\n";
        return;
    }
    else
    {
        cout << "TRIANGLE\n";
        return;
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

