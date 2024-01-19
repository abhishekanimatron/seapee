#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

int help(int a, int b, int i)
{
    if (a == b)
        return 0;
    if (i == 1e9)
        return 0;
    else
    {
        if (i % 2 == 1)
        {
            int x = help(a + i, b, i + 1) + 1;
            int y = help(a, b + i, i + 1) + 1;
            return min(x, y);
        }
        else
        {
            int x = help(a - i, b, i + 1) + 1;
            int y = help(a, b - i, i + 1) + 1;
            return min(x, y);
        }
    }
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "0" << endl;
    }
    else
    {

        cout << a << " " << b << endl;
        cout << "reached\n";
        int ans = help(a, b, 1);
        cout << ans << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    // cout << t << endl;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    // while (t--)
    // {
    //     cout << "here";
    //     solve();
    // }
    return 0;
}