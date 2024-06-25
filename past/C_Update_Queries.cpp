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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> ind(m);
    fo(i, m) cin >> ind[i];
    string c;
    cin >> c;
    sort(ind.begin(), ind.end());
    sort(c.rbegin(), c.rend());
    for (auto &i : ind)
        --i;
    // for (auto &i : ind)
    //     cout << i << " ";
    // cout << endl;
    // cout << c << endl;
    int sm = 0, lg = m - 1;
    for (int i = 0; i < m; i++)
    {
        if (i < m - 1 && ind[i] != ind[i + 1])
            s[ind[i]] = c[lg--];
        else
            s[ind[i]] = c[sm++];
        // cout << "at: " << ind[i] << endl;
        // cout << s << endl;
    }
    cout << s <<endl;
}

// c=zcwz
// In the second set of input data, you can set the array ind=[1,1,4,2]
//  and c=
//  "zczw". Then the string s
//  will change as follows: meow→zeow→ceow→ceoz→cwoz

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