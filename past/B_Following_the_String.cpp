#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    // vector<int> al(26, 0);
    map<char, int> mp;
    for (char i = 'a'; i <= 'z'; i++)
    {
        mp[i] = 0;
    }
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    vector<char> ans(n);
    for (int i = 0; i < n; i++)
    {
        int occ = A[i];
        // cout << occ << " ";
        for (auto &it : mp)
        {
            if (it.second == occ)
            {
                // cout << it.first << " ";
                ans[i] = it.first;
                it.second++;
                break;
            }
        }
    }
    for (char c : ans)
        cout << c;
    cout << endl;
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