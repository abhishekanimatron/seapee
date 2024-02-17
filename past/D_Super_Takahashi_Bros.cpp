#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using ii = pair<lli, lli>;
using vi = vector<lli>;
using vii = vector<ii>;
#define double long double
#define fo(i, n) for (i = 0; i < (n); ++i)
#define repA(i, j, n) for (i = (j); i <= (n); ++i)
#define repD(i, j, n) for (i = (j); i >= (n); --i)
#define all(x) begin(x), end(x)
#define eb emplace_back
#define X first
#define Y second
const int MOD = 1000000007;
const int INF = 1000000000;

void solve()
{
    lli n;
    cin >> n;
    vector<vii> e(n);
    for (lli i = 0; i < n - 1; i++)
    {
        lli A, B, x;
        cin >> A >> B >> x;
        x--;
        e[i].eb(ii{A, i + 1});
        e[i].eb(ii{B, x});
    }

    vi dist(n, INF);
    priority_queue<ii> pq;
    pq.push(ii{0, 0});
    while (!pq.empty())
    {
        const auto tp = pq.top();
        pq.pop();
        const lli u = tp.Y, d = -tp.X;
        if (dist[u] <= d)
            continue;
        dist[u] = d;
        for (auto x : e[u])
            pq.push(ii{-d - x.X, x.Y});
    }
    cout << dist[n - 1] << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}