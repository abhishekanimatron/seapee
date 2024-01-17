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
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 1; i < s.length(); i++)
    {
        string as = s.substr(0, i);
        if (as[0] == '0')
            continue;
        int a = stoi(as);
        string bs = s.substr(i);
        if (bs[0] == '0')
            continue;
        int b = stoi(bs);
        // cout << as << " " << bs << endl;
        if ((as + bs) != s)
            continue;
        if (b > a)
        {
            cout << a << " " << b << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << "-1" << endl;
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
