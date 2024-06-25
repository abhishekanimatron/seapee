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
    int n, f, k;
    cin >> n >> f >> k;
    vector<pair<int, int>> A;
    int fav = -1;
    int freq = 0;
    for (int i = 0; i < n; ++i)
    {
        int x = 0;
        cin >> x;
        A.push_back(make_pair(x, i));
        if ((f - 1) == i)
        {
            fav = x;
        }
        if (fav == x)
            freq++;
    }
    sort(A.rbegin(), A.rend());
    // for (auto &it : A)
    // {
    //     cout << it.first << " ";
    // }
    string ans = "NO";
    for (int i = 0; i < k; ++i)
    {
        if (A[i].first == fav)
        {
            ans = "YES";
            if (i + 1 < n && A[i + 1].first == fav)
            {
                ans = "MAYBE";
                // break;
            }
        }
    }
    // cout << "\nfreq: " << freq << endl;
    cout << ans << endl;
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