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
const int MOD = 1000000007;
const int INF = 1000000000;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (i + j + k + 3 == n)
                {
                    string ans = "";
                    char c = i + 'a';
                    ans = c;
                    c = j + 'a';
                    ans += c;
                    c = k + 'a';
                    ans += c;
                    cout << ans << endl;
                    return;
                }
            }
        }
    }
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
// abdefghijklmnopq r s t u v w x y z
//
// 24
// aav
// 70=26+26+18
//
