#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

map<int, int> mp;
int solve(int n)
{
    if (n == 1)
        return 0;
    if (mp.count(n))
        return mp[n];
    int fl = n / 2;
    int cl = (n + 1) / 2;
    return mp[n] = n + solve(fl) + solve(cl);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--){
    //     solve();
    // }
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}