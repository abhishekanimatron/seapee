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
    unordered_map<int, int> f;
    vector<int> a(n);
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
        mini = min(mini, a[i]);
    }
    // cout << mini << endl;
    for (int it : a)
    {
        if (it % mini)
        {
            cout << "YES\n";
            return;
        }
    }
    if (f[mini] == 1)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        cout << "NO\n";
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