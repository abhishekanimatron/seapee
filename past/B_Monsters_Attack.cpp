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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), x(n);
    // vector<pair<int, int>> v;
    unordered_map<int, vector<pair<int, int>>> mp;
    int i = 0;
    fo(i, n)
    {
        cin >> a[i];
    }
    fo(i, n)
    {
        cin >> x[i];
        x[i] = abs(x[i]);
        // v.push_back({x[i], a[i]});
        mp[0].push_back({x[i], a[i]});
    }
    int ok = k;
    int t = 0;
    for (auto it : mp[t])
    {
        t++;
        int health = it.second;
        int position = it.first;
        if (ok > 0)
        {
            ok--;
            health--;
        }
        position--;
        if (health > 0 && position == 0)
        {
            cout << "NO\n";
            return;
        }
        mp[t].push_back({position, health});
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

// 1 2 3
// -1 2 3

// fire 2 bullets
// health : 0 1 3
// positin: _ 1 2

// health : 0 0 1
// positi : _ _ 1
// fire and all dead

// 1 1
// -1 1

// both distance at 1, will move to 0 , have to kill both, but only one bullet,
// print(NO)

// 3 4 2 5
// -3 -2 1 3

// first sort by position

//