#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int startingPosition = -1, endingPosition = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            startingPosition = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            endingPosition = i;
            break;
        }
    }
    cout << endingPosition - startingPosition + 1 << endl;
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