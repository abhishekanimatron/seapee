#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
#define double long double
#define fo(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, j, n) for (int i = (j); i <= (n); ++i)
#define repD(i, j, n) for (int i = (j); i >= (n); --i)
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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char prev = '#';
    char pdig = '#';
    bool prevchar = false;
    bool sayNo = false;
    for (int i = 0; i < n; ++i)
    {
        char c = s[i];
        if (c >= 'a' && c <= 'z')
        {
            prevchar = true;

            if (prev == '#')
            {
                prev = c;
            }
            else if (prev > c)
            {
                sayNo = true;
                break;
            }
            else
            {
                if (c > prev)
                {
                    prev = c;
                }
            }
        }
        else if (c >= '0' && c <= '9')
        {
            if (prevchar)
            {
                sayNo = true;
                break;
            }
            if (pdig == '#')
            {
                pdig = c;
            }
            else if (pdig > c)
            {
                sayNo = true;
                break;
            }
            else
            {
                if (c > pdig)
                {
                    pdig = c;
                }
            }
        }
        else
        {
            sayNo = true;
            break;
        }
    }
    if (sayNo)
        cout << "NO\n";
    else
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