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
int ans = INT_MAX;
int sol(string &s, int id, int cur, bool isAdd, int op)
{
    if (op < 0)
        return INT_MAX;
    if (op == 0)
    {
        ans = min(ans, cur);
        return cur;
    }
    int d = s[id] - '0';
    if (isAdd)
    {
        cur = cur + d;
    }
    else
    {
        cur = cur * d;
    }
    return min(sol(s, id + 1, cur, true, op - 1), sol(s, id + 1, cur, false, op - 1));
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int as = s[0] - '0';
    if (n <= 2)
    {
        cout << stoi(s) << endl;
        return;
    }
    int x = sol(s, 1, as, true, n - 2);
    int y = sol(s, 1, as, false, n - 2);

    if (x < y)
        cout << x << endl;
    else
        cout << y << endl;
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