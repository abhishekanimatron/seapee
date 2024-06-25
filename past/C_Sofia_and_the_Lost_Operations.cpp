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
    int diff = 0;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> B[i];
        mp[B[i]]++;
        if (A[i] != B[i])
            diff++;
        else
        {
            mp[B[i]]--;
        }
    }
    int m;
    cin >> m;
    vector<int> D(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> D[i];
    }
    int leftout = 0;
    for (int i = 0; i < m; ++i)
    {
        if (mp.count(D[i]))
        {
            if (--mp[D[i]] == 0)
                mp.erase(D[i]);
            if (leftout > 0)
                --leftout;
        }
        else
        {
            leftout++;
        }
    }
    cout << "leftout: " << leftout << endl;
    cout << "diff: " << diff << endl;
    cout << "mp.size: " << mp.size() << endl;

    if (leftout)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    // string ans = "YES";
    // for (int i = 0; i < n; ++i)
    // {
    //     if (A[i] == B[i])
    //     {
    //         if (mp.count(B[i]))
    //         {
    //             if (--mp[B[i]] == 0)
    //                 mp.erase(B[i]);
    //         }
    //     }
    //     else
    //     {
    //         if (mp.count(B[i]))
    //         {
    //             if (--mp[B[i]] == 0)
    //                 mp.erase(B[i]);
    //         }
    //         else
    //         {
    //             ans = "NO";
    //             break;
    //         }
    //     }
    // }
    // cout<<"\nmp: "<<endl;
    // for (auto &it : mp)
    // {
    //     if (it.second > 0)
    //     {
    //         cout << it.first << " ";
    //     }
    // }
    // cout<<endl;
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