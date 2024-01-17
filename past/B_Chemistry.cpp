#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

const int nmax = 1e6 + 5;
const int inf = 1e9 + 5;
int n, k, m, q;
vector<int> g[nmax];
int v[nmax];

static void testcase()
{
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "YES\n";
        return;
    }
    vector<int> f(26, 0);
    for (int i = 0; i < n; i++)
    {
        f[s[i] - 'a']++;
    }
    int cnt = 0;
    for (auto it : f)
    {
        if (it % 2 == 1)
            cnt++;
    }
    // cout << "cnt:" << cnt << endl;
    cnt -= k;
    if (cnt <= 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        testcase();
}
