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

int mex(vector<int> &v)
{
    int maxi = 0;
    unordered_set<int> s;
    for (int i : v)
    {
        s.insert(i);
        maxi = max(maxi, i);
    }
    for (int i = 0; i <= maxi; i++)
    {
        if (s.find(i) == s.end())
            return i;
    }
    return maxi + 1;
}
void solver()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    unordered_set<int> st;

    vector<pair<int, int>> vii;

    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.find(a[i]) != st.end())
        {
            st.clear();
            vii.push_back({pre + 1, i});
            // cout << pre + 1 << " " << i << endl;
            pre = i;
        }

        st.insert(a[i]);
    }
    if (pre < n)
    {

        vii.push_back({pre + 1, n});
        // cout << pre + 1 << " " << n << endl;
    }
    int premex = -1;
    bool notpossi = false;
    for (auto &[i1, i2] : vii)
    {
        vector<int> t;
        for (int i = i1 - 1; i < i2; i++)
        {
            t.push_back(a[i]);
        }
        // cout << "mex:" << mex(t) << endl;
        int curmex = mex(t);
        if (premex == -1)
        {
            premex = curmex;
        }
        else if (premex != curmex)
        {
            notpossi = true;
            break;
        }
    }
    if (notpossi)
    {
        cout << "-1" << endl;
    }
    else if (vii.size() == 1)
    {

        cout << "-1" << endl;
    }
    else
    {
        cout << vii.size() << endl;
        for (auto &[i1, i2] : vii)
        {
            cout << i1 << " " << i2 << endl;

            
            // for (int i = i1 - 1; i < i2; i++)
            // {
            //     cout << a[i] << " ";
            // }
            // cout << endl;
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
    int c = 0;
    while (t--)
    {
        // cout << "test: " << ++c << endl;
        solver();
    }
    return 0;
}

// 0 1 7 1 0 1 0 3