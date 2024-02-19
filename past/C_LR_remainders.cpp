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
    int n, m;
    cin >> n >> m;
    vector<lli> a(n);
    lli prod = 1;
    for (lli i = 0; i < n; i++)
    {
        cin >> a[i];
        prod *= a[i];
    }
    // for(auto i:a)cout<<i<<" ";
    // cout << endl;
    string s;
    cin >> s;
    cout << prod % m << " ";
    int l = 0, r = n - 1;
    if (n == 1)
        return;
    for (lli i = 0; i < s.length()-1 ; i++)
    {
        char c = s[i];
        if (c == 'L')
        {
            // int cur = prod / a[l];
            prod /= a[l];
            // cout << "l: " << a[l] << endl;
            // cout << "cur:" << cur << endl;
            l++;
        }
        else
        {
            prod /= a[r];
            r--;
        }
        cout << prod % m << " ";
    }
    cout <<  endl;
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
// 24/6
