#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vector<int> at(n), df(n);
    for (int i = 0; i < n; i++)
        cin >> at[i];
    for (int i = 0; i < n; i++)
        cin >> df[i];
    vector<int> ans;
    for (int j = 0; j < n; j++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (i == 0 && df[i + 1] >= 0)
            {
                df[i + 1] -= at[i];
                if (df[i + 1] < 0)
                    cnt++;
            }
            else if (i == n - 1 && df[i - 1] >= 0)
            {
                df[i - 1] -= at[i];
                if (df[i - 1] < 0)
                    cnt++;
            }
            else
            {
                if (df[i - 1] >= 0)
                {
                    df[i - 1] -= at[i];
                    if (df[i - 1] < 0)
                        cnt++;
                }

                if (df[i + 1] >= 0)
                {
                    df[i + 1] -= at[i];
                    if (df[i + 1] < 0)
                        cnt++;
                }
            }
        }
        ans.push_back(cnt);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
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