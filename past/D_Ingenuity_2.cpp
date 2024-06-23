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
    int n;
    cin >> n;
    string s, ans;
    cin >> s;
    map<char, int> mp, turn;

    for (auto e : s)
        mp[e]++;
    if ((mp['N'] + mp['S']) % 2 != 0 || (mp['W'] + mp['E']) % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    if (n == 2 && (mp['N'] == 1 || mp['W'] == 1))
    {
        cout << "NO\n";
        return;
    }
    turn['E'] = 1, turn['W'] = 1;

    for (auto e : s)
    {
        if (turn[e] % 2)
            ans += 'H';

        else
            ans += 'R';

        turn[e]++;
    }
    cout << ans << "\n";
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