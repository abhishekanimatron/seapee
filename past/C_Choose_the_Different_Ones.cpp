#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    // for(auto i:a)cout<<i<<" ";
    // cout<<endl;
    // for(auto i:b)cout<<i<<" ";
    int cnta = 0, cntb = 0;
    for (int i = 1; i <= k; i++)
    {
        bool flag = false;
        if (binary_search(a.begin(), a.end(), i))
        {
            flag = true;
            cnta++;
        }
        if (binary_search(b.begin(), b.end(), i))
        {
            flag = true;
            cntb++;
        }
        if (!flag)
        {
            cout << "NO\n";
            return;
        }
    }
    if (cnta < k / 2)
    {
        cout << "NO\n";
        return;
    }
    if (cntb < k / 2)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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