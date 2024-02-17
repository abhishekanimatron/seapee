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
    vector<lli> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<lli, lli>> st;
    for (int i = 0; i < n - 1; i++)
    {
        lli s, t;
        cin >> s >> t;
        st.push_back({s, t});
    }
    for (int i = 0; i < n - 1; i++)
    {
        lli num = a[i] / st[i].X;
        lli getting = st[i].Y * num;
        a[i + 1] += getting;
        // for (auto it : a)
        // cout << it << " ";
        // cout << endl;
    }
    cout << a.back() << endl;
}

// 5 7 0 3
// 3903 //2 from first, gone to 2
// 3163 //8 from second, gone to 3
// 3115 // 5 from third, gone to 4
// return a.last()

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--){
    solve();
    // }
    return 0;
}