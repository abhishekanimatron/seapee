#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int h, w, xa, ya, xb, yb;
    cin >> h >> w >> xa >> ya >> xb >> yb;

    char turn = 'a';
    int x = 0;
    while (x < max(h, w))
    {
        if (turn == 'a')
        {

            if (xa == xb && ya == yb)
            {
                cout << "Alice\n";
                return;
            }
            else if (xa == w || ya == h)
            {
                cout << "Draw\n";
                return;
            }
            else
            {
                if (xa < xb)
                {
                    xa++;
                    ya++;
                }
                else if (xa > xb)
                {
                    xa--;
                    ya++;
                }
                else
                {
                    ya++;
                }
            }
            turn == 'b';
        }
        else
        {
            if (xa == xb && ya == yb)
            {
                cout << "Bob\n";
                return;
            }
            else if (xb == 0 || ya == 0)
            {
                cout << "Draw\n";
                return;
            }
            else
            {

                if (xb > xa)
                {
                    xb--;
                    yb--;
                }
                else if (xb < xa)
                {
                    xb++;
                    yb--;
                }
                else
                {
                    yb--;
                }
            }
            turn = 'a';
        }
        x++;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}

// 6 1 2 4
// 3 5 1 7 2 3

// 1 2 4 6
// 7 5 3 3 2 1
// 6 3 1 3 = 12

// 1 2 4 6
// 5 7 2 1
// 4 5 2 5 = 16
