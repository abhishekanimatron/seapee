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

bool isGood(string &x)
{
    int n = x.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (x[i] == x[i + 1])
            return false;
    }
    return true;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < q; i++)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            for (int j = l - 1; j <= r - 1; j++)
            {
                if (s[j] == '0')
                    s[j] = '1';
                else
                    s[j] = '0';
            }
        }
        else
        {
            --r;
            string x = s.substr(l - 1, r - l + 2);
            // cout<<x<<endl;
            if (isGood(x))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}