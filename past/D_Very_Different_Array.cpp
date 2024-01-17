#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll A[n];
    ll B[m];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    sort(A, A + n);
    sort(B, B + m);

    ll ans = 0;
    int la = 0, lb = 0, ra = n - 1, rb = m - 1;
    while (la <= ra)
    {
        if (abs(A[la] - B[rb]) > abs(B[lb] - A[ra]))
        {
            ans += abs(A[la] - B[rb]);
            la++;
            rb--;
        }
        else
        {
            ans += abs(B[lb] - A[ra]);
            lb++;
            ra--;
        }
    }
    cout << ans << endl;
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

// 6-1
// 1-7
// 4-2
// 2-5
// 5+6+2+3=16

// 1-5
// 5-2
// 2-3
// 4-1
// 3-4
//
// 4+3+1+3+1=12

// 5 8
// 8 7 5 8 2 10

// 5-10
// 8-2
// 5+6=11

// 8 10 6 4
// 3 10 6 1 8 9

// 4-10
// 10-1
// 6-9
// 8-3
// 6+9+3+5= 23