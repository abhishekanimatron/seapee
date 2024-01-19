#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    string a, b, c;
    int n;
    cin >> n;
    cin >> a >> b >> c;
    string x = "";
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == c[i])
        {
            // x += a[i];
            cnt++;
        }
        else if(b[i]==c[i])
        {
            // x += c[i];
            cnt++;
        }
    }
    // cout << x << endl;
    if(n==cnt)
    // if (a == c || b == c)
        cout << "NO\n";
    else
        cout << "YES\n";
}

// a
// b

// c

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