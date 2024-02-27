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

void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}

void solve()
{
    long long a, b, l;
    cin >> a >> b >> l;
    long long alim = 0, blim = 0;
    while (pow(a, alim) < l)
    {
        alim++;
    }
    while (pow(b, blim) < l)
    {
        blim++;
    }
    long long ans = 0;
    // unordered_set<pair<int, int>> st;
    set<int> st;
    for (long long x = 0; x <= alim; x++)
    {
        if (pow(a, x) > l)
            break;
        for (long long y = 0; y <= blim; y++)
        {
            if ((pow(a, x) * pow(b, y)) > l)
                break;

            long long mul = pow(a, x) * pow(b, y);
            if (l % mul == 0)
            {
                long long k = l / mul;
                // st.insert(k);
                if (st.find(k) == st.end())
                {
                    ans++;
                    st.insert(k);
                }
            }
            // for (long long k = 1; k <= l; k++)
            // {
            //     long long mul = pow(a, x) * pow(b, y) * k;
            //     if (mul > l)
            //         break;
            //     if (mul == l)
            //     {
            //         if (st.find(k) == st.end())
            //         {
            //             ans++;
            //             st.insert(k);
            //         }
            //     }
            // }
        }
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

// 2 5 20
// 0 1  == k=4