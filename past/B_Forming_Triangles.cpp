#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

// length of the i-th stick is 2 power ai
// exactly 3 sticks
//  area is strictly greater than 0

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n < 3)
    {
        cout << "0" << endl;
        return;
    }
    sort(v.begin(), v.end());
    int a = n - 3, b = n - 2, c = n - 1;
    int cnt = 0;
    // b = round(pow(5,2));

    // 1= 1
    // 2= 4
    // 3= 8
    // 4= 16

    // while (a >= 0)
    // {
    //     // long long xa = pow(2, v[a]);
    //     // long long xb = pow(2, v[b]);
    //     // long long xc = pow(2, v[c]);
    //     if (c >= (a + b))
    //     {
    //         cnt++;
    //         if (a - 1 >= 0)
    //             a--;
    //         else if (b - 1 > a)
    //             b--;
    //         else
    //             c--;
    //     }
    //     else
    //     {
    //         if (b - 1 > a)
    //             b--;
    //         else if (a - 1 >= 0)
    //             a--;
    //         else
    //             break;
    //     }
    // }
    for (int i = 0; i < n - 2; i++)
    {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; j++)
        {
            while (k < n && v[k] < v[i] + v[j])
                k++;
            cnt += (k - j - 1);
        }
    }
    cout << cnt << endl;
}
// 1 2 3 3

// 1111 111 // 7C5

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