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
const int MOD = 1000000007;
const int INF = 1000000000;

// N x N
// has 4N - 2 diagonals
void solve()
{
    int n, k;
    cin >> n >> k;
    int maxi = 4 * n - 2;

    if (k == maxi)
    {
        cout << n + n << endl;
    }
    else
    {
        cout << (k + 1) / 2 << endl;
    }
    // cout << " n:" << n << " k:" << k << " sum:";
    // cout << (4 * n - 2) / k << endl;
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