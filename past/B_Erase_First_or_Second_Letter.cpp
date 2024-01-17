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

void solve(unordered_set<string> &st, string x)
{
    st.insert(x);
    if (x.length() <= 0)
        return;
    if (x.length() > 1)
    {
        string xx = x.substr(1);
        solve(st, xx);
    }
    if (x.length() > 2)
    {
        string y = x[0] + x.substr(2);
        solve(st, y);
    }
    if (x.length() == 2)
    {
        string a = x.substr(0, 1);
        string b = x.substr(1);
        st.insert(a);
        st.insert(b);
    }
}

static void testcase()
{
    cin >> n;
    string s;
    cin >> s;
    unordered_set<string> st;
    solve(st, s);
    cout << st.size() << endl;
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
