#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> prefix(n + 1, 0);
    unordered_map<int, int> freq;

    for (int i = 1; i <= n; ++i)
    {
        prefix[i] = prefix[i - 1];
        if (freq.find(A[i - 1]) == freq.end())
        {
            prefix[i]++;
        }
        freq[A[i - 1]]++;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l = 0, r = 0;
        cin >> l >> r;
        bool flag = false;
        int i1 = -1, i2 = -1;
        if (prefix[r - 1] - prefix[l - 2] >= 2)
        {
        unordered_set<int> st;
            // flag = true;
            // for (int j = l - 1; j <= r - 1; j++)
            // {
            //     if (i1 != -1 && i2 != -2)
            //         break;
            //     if (st.insert(A[j]).second)
            //     {
            //         if (i1 == -1)
            //             i1 = j + 1;
            //         else
            //             i2 = j + 1;
            //     }
            // }

            // cout << i1 << " " << i2 << endl;
            cout << "found\n";
        }
        else
        {

            cout << "-1 -1" << endl;
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