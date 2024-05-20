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

bool modify(vector<int> &a)
{
    int n = a.size();
    vector<int> v;
    bool possible = false;
    for (int i = 0; i < n - 1; i++)
    {
        // cout << nu[i - 1] << " " << nu[i] << endl;
        if (a[i] > a[i + 1] && a[i] >= 10)
        {
            possible = true;
            // cout << a[i - 1] << " ";
            int lastdigit = a[i] % 10;
            int firstdigit = a[i] / 10;
            // cout << lastdigit << " " << firstdigit << " done" << endl;
            v.push_back(firstdigit);
            v.push_back(lastdigit);
        }
        else
        {
            v.push_back(a[i]);
        }
    }
    v.push_back(a[n - 1]);
    a = v;
    if (!possible)
        return false;
    else
        return true;
}

bool coolcheck(vector<int> &a)
{
    bool alreadycool = true;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] > a[i])
        {

            alreadycool = false;
            break;
        }
    }
    if (alreadycool)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    bool ispossi = true;
    while (cnt < n)
    {
        bool possi = modify(a);

        if (!possi)
        {
            ispossi = false;
            break;
        }
        else
        {
            if (coolcheck(a))
            {
                cout << "YES\n";
                return;
            }
        }
    }
    if (ispossi = false)
    {
        cout << "NO\n";
    }
    // for (int i : a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // modify(a);
    // for (int i : a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
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