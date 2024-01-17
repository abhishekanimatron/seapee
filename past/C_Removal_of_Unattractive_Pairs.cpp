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
    cin >> n;
    string s;
    cin >> s;
    unordered_map<int, int> a;
    for (auto c : s)
        a[c - 'a']++;
    int maxi = INT_MIN;
    for (auto it : a)
        maxi = max(maxi, it.second);
    cout<<max(n%2, 2*maxi-n)<<endl;
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
