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
    int adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }
    vector<int> edg(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> edg[i];
    string s;
    cin >> s;
    int ans = 0;
    int si = 0, ei = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // int v = i - 1;
        int u = i + 1;
        // cout << "\nfrom: " << u << "    to: " << edg[ei] - 1 << endl;

        int v = edg[ei++] - 1;
        adj[u][v] = 1;
        // adj[v][u] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j])
            {

                if ((s[i] == 'P' && s[j] == 'S') || (s[i] == 'S' && s[j] == 'P'))
                    ans++;
            }
        }
        // cout << endl;
    }

    // for (int i = 0; i < (int)s.length() - 1; i++)
    // {

    //     char v1 = s[si];
    //     char v2 = s[si + 1];
    //     if ((v1 == 'C' && v2 == 'S') || (v1 == 'S' && v2 == 'C'))
    //         ans++;
    // }
    cout << ans ;
    cout << endl;
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