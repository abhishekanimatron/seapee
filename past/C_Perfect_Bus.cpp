#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    int mini = INT_MAX;
    for (int i : a)
    {
        sum += i;
        mini = min(sum, mini);
    }
    // mini
    if (mini >= 0)
        cout << "0" << endl;
    else
    {
        mini *= -1;
        int sum = mini;
        for (int i : a)
        {
            sum += i;
        }
        cout << sum << endl;
    }
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

// 1
// 4

// 2
// 5
// 0
// 7
// 3

// 3
//-2
// 5
// 1