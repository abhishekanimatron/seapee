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
    vector<int> a(n), b(m);
    // unordered_map<int, int> mp, mb;
    unordered_set<int> st;
    for (int i = 0; i < n; ++i)
    {

        cin >> a[i];
        st.insert(a[i]);
        // if (i > 0)
        // {
        //     mp[a[i - 1]] = a[i];
        // }
        // if (i > 0)
        // {
        //     mb[a[i]] = a[i - 1];
        // }
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    vector<int> c;
    for (int i : a)
        c.push_back(i);
    for (int i : b)
        c.push_back(i);
    sort(begin(c), end(c));
    bool yes = false;
    int cnt = 0;
    for (int i = 0; i < n + m - 1; ++i)
    {
        if (st.find(c[i]) != st.end() && st.find(c[i + 1]) != st.end())
        {
            yes = true;
            break;
        }
    }
    // for (int i = 0; i < (int)c.size() - 1; ++i)
    // {
    //     if (mp[c[i]] == c[i + 1] || mb[c[i]] == c[i + 1])
    //     {
    //         yes = true;
    //         break;
    //     }
    //     if (i > 0 && mp[c[i]] == c[i - 1] || mb[c[i]] == c[i - 1])
    //     {
    //         yes = true;
    //         break;
    //     }
    // }
    if (yes)
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--){
    //     solve();
    // }
    solve();
    return 0;
}