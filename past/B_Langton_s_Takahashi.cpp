#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int h, w, n;
    cin >> h >> w >> n;
    // toroidal
    // That is,
    //  (i,1) is to the right of (i,W) for each 1≤i≤H, and
    //  (1,j) is below (H,j) for each 1≤j≤W

    char taka[h][w];
    // cout<<"h:"<<h<<endl;
    // cout<<"w:"<<w<<endl;
    memset(taka, '.', sizeof(taka));
    int x = 0, y = 0;
    char dir = 'u';
    for (int i = 0; i < n; i++)
    {
        if (taka[x][y] == '.')
        {
            taka[x][y] = '#';
            if (dir == 'u')
            {
                dir = 'r';
                y++;
                if (y == w)
                    y = 0;
            }
            else if (dir == 'r')
            {
                dir = 'd';
                x++;
                if (x == h)
                    x = 0;
            }
            else if (dir == 'd')
            {
                dir = 'l';
                y--;
                if (y < 0)
                    y = w - 1;
            }
            else if (dir == 'l')
            {
                dir = 'u';
                x--;
                if (x < 0)
                    x = h - 1;
            }
        }
        else
        {
            taka[x][y] = '.';
            if (dir == 'u')
            {
                dir = 'l';
                y--;
                if (y < 0)
                    y = w - 1;
            }
            else if (dir == 'r')
            {
                dir = 'u';
                x--;
                if (x < 0)
                    x = h - 1;
            }
            else if (dir == 'd')
            {
                dir = 'r';
                y++;
                if (y == w)
                    y = 0;
            }
            else if (dir == 'l')
            {
                dir = 'd';
                x++;
                if (x == h)
                    x = 0;
            }
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << taka[i][j];
        }
        cout << endl;
    }
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