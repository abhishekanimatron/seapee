#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int h, x, y1, y2, k;
    cin >> h >> x >> y1 >> y2 >> k;
    int he = h;
    int gun = ceil(he / (double)x);
    int laser = 0;
    he = h;
    if (he <= y1 * k)
    {
        int lx = ceil(he / (double)y1);
        laser += lx;
        he = 0;
    }
    else if (he > y1 * k)
    {
        he -= (y1 * k);
        laser += k;
    }
    if (he > 0)
    {
        int lx = ceil(he / (double)y2);
        laser += lx;
    }
    cout << min(laser, gun) << endl;
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