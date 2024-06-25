#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<int> next(n);
    if (v[n - 1][n - 1] == '.')
        next[n - 1] = 1;
    else
        next[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[n - 1][i] == '.')
            next[i] = next[i + 1];
        else
            next[i] = 0;
    }   
    for (int i = n - 2; i >= 0; i--)
    {
        vector<int> cur(n, 0);
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == n - 1 && j == n - 1)
                continue;
            if (v[i][j] == '*')
                cur[j] = 0;
            else
            {
                int down = i < n - 1 ? next[j] : 0;
                int right = j < n - 1 ? cur[j + 1] : 0;
                cur[j] = (down + right) % MOD;
            }
        }
        next = cur;
    }
    cout << next[0] << endl;
}
int main()
{
    solve();
}
