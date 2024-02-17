#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

int moves(vector<vector<char>> mat, int x1, int x2, int y1, int y2)
{
    if (x1 < 0 || x2 < 0 || y1 >= mat.size() || y2 >= mat.size())
    {
        return 0;
    }
    if (mat[x1][y1] == '#' || mat[x2][y2] == '#')
        return 0;
    if (x1 == x2 && y1 == y2)
        return 1;
    cout << "here\n";
    int le = 1 + moves(mat, x1 - 1, x2 - 1, y1, y2);
    int ri = 1 + moves(mat, x1 + 1, x2 + 1, y1, y2);
    int upp = 1 + moves(mat, x1, x2, y1 - 1, y2 - 1);
    int dow = 1 + moves(mat, x1, x2, y1 + 1, y2 + 1);

    return min(le, min(ri, min(upp, dow)));
}

void solve()
{
    int n;
    cin >> n;
    // char mat[n][n];
    vector<vector<char>> mat(n, vector<char>(n, '.'));
    int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            mat[i][j] = c;
            if (c == 'P')
            {
                if (x1 == -1)
                {
                    x1 = i;
                    y1 = j;
                }
                else
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }
    cout << moves(mat, x1, x2, y1, y2) << endl;
    // cout << x1 << " " << y1 << endl;
    // cout << x2 << " " << y2 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}