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
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
const int MOD = 1000000007;
const int MOD2 = 998244353;
const int INF = 1000000000;

int func(int n)
{
    if (n < 10)
        return n * (n + 1) / 2;

    int d = log10(n);

    int *a = new int[d + 1];
    a[0] = 0, a[1] = 45;
    for (int i = 2; i <= d; i++)
        a[i] = a[i - 1] * 10 + 45 * ceil(pow(10, i - 1));

    // computing 10^d
    int p = ceil(pow(10, d));

    int msd = n / p;

    return msd * a[d] + (msd * (msd - 1) / 2) * p +
           msd * (1 + n % p) + func(n % p);
}

void solve()
{
    int n;
    cin >> n;
    // int ff = n / 9;
    if (n < 10)
    {
        cout << (n * (n + 1)) / 2 << endl;
        return;
    }
    // int ans = ff * 45;
    // int after = n % 9;

    // int x = (after * (after + 1)) / 2;
    // // cout << after << endl;
    // ans += x;
    // cout << ans << endl;

    // cout << "\n100s:" << endl;
    // int sum = 0;
    // for (int i = 2; i <= 11; i++)
    //     // cout << sum+=i << endl;
    //     sum += i;
    cout << func(n) << endl;
}

// till 10
// (n*n+1)/2

// 100
//  101: 1,2,3,4,5,6,7,8,9till 109 same, sum is 55, 10 more than 55
//  102
//  103
//  104
//  105
//  106
//  107
//  108
//  109

// 110: 2,3,4,5,6,7,8,9,10,11, 2 to 11 sum is 65, 20 more than 45
// 111
// 112
// 113
// 114
// 115
// 116
// 117
// 118
// 119
// 120

// (10+20+30...+90)

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