#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n, k;
    cin >> n >> k;
    string ans = "";
    char c = 'a';
    for (int i = 0; i < n * k; i++)
    {
        ans = ans + c;
        c++;
        if (c - 'a' >= k)
            c = 'a';
    }
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

// 4
// 1 2
// 2 1
// 2 2
// 2 3

// 1 2
// ab
// 1 3
// abc
// 1 4
// abcd

// 2 1
// aa
// 2 2
// abab
// 2 3
// abcabc