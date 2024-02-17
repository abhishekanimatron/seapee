#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
#define double long double
#define fo(i, n) for (i = 0; i < (n); ++i)
#define repA(i, j, n) for (i = (j); i <= (n); ++i)
#define repD(i, j, n) for (i = (j); i >= (n); --i)
#define all(x) begin(x), end(x)
#define eb emplace_back
#define X first
#define Y second
const int MOD = 1000000007;
const int INF = 1000000000;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> A(n);
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {

//         cin >> A[i];
//         sum += A[i];
//     }
//     if (n == 1)
//     {
//         cout << "YES\n";
//         return;
//     }
//     int tar = sum / n;

//     int i = 0;
//     for (; i < n - 1; i++)
//     {
//         if (A[i] == tar)
//             continue;
//         else if (A[i] < tar)
//             break;
//         else
//         {
//             int surplus = A[i] - tar;
//             A[i + 1] += surplus;
//         }
//     }
//     if (i == n - 1)
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }
//     return;
// }

void csolve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    int first = -1;
    bool allsame = true;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (i == 0)
            first = A[i];
        if (first != A[i])
            allsame = false;
    }
    if (allsame)
    {
        cout << "0" << endl;
        return;
    }
    if (n == 2)
    {
        cout << 1 << endl;
        return;
    }
    int firsl = A[0];
    int l = 0, x = 0, y = 0;
    while (firsl == A[l])
    {
        l++;
        x++;
    }
    int firsr = A[n - 1];
    int r = n - 1;
    while (A[r] == firsr)
    {
        r--;
        y++;
    }
    // cout << "\nleft: " << l + 1 << endl;
    // cout << "right: " << r + 1 << endl;
    if (A[0] == A[n - 1])
    {
        cout << n - x - y << endl;
    }
    else
    {
        // cout << "here\n";
        cout << n - max(x, y) << endl;
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
        csolve();
    }
    return 0;
}

// 4 5 2 1 3
// sum=15
// avg=3
// 3 3 3 3 3

// 7111771117
