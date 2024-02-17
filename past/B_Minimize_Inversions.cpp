#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    if (a == b)
    {
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
        return;
    }
    // int rot = n / 2;
    // rotate(a, n - rot);
    // rotate(b, n - rot);
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
        v.push_back({a[i], b[i]});

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        a[i] = v[i].first;
        b[i] = v[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
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

// 1 2 3 4 5 // 0
// 5 4 3 2 1 // maxi

// 3 2 5 1 4 // inversions: 5
// 3 4 1 5 2 // inversions: 5

// 3 4 5 1 2 // inversions: 6
// 3 2 1 5 4 //inversion: 4

// jury:
//  2 3 4 6 5 1 //inv: 6
//  1 2 4 3 5 6 //inv: 1

// miny:
//  1 3 4 2 5 6 //inv: 2
//  6 2 4 1 5 3

// 1 2 3 4 5 // 0
// 5 4 3 2 1 // maxi

// 2 3 4 5 1
// 4 3 2 1 5

// 3 4 5 1 2
// 3 2 1 5 4
