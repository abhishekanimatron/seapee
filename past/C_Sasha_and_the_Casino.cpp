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

void solve()
{
    int k, x, a;
    cin >> k >> x >> a;
    int incxbyone = (x * (x + 1)) / 2;
    // cout<<"lost: "<<incxbyone<<endl;
    int spent = x;
    if (a - spent < 0)
    {
        cout << "NO\n";
        return;
    }
    int cur=a-spent;
    // int remain=a-spent;
    int afterwin=cur+k;
    // spent += k;
    if (afterwin> a)
        cout << "YES\n";
    else
        cout << "NO\n";
}

// k = 5
// can lose: 4
// coins: 7
// place 1, lost, 6
// place 1, lost, 5
// place 1, lost, 4
// place 1, lost, 3

// k = 2
// can lose: 1
// coins: 7

// place 1 coin // 6
// if win, coins=8
// if lose, coins=7 //same//can repeat
// YES

// k = 2
// can lose: 1
// coins:1

// place 1 coin// if lose 0// can't repeat
// NO

// k = 2
// can lose: 3
// coins:15

// place 1 coin
// if win, coins=16
// if lose, coins=14

// again put 1 coin,
// if win, 15, if lose=13

// place 2 coin
// if win, coins=17
// if lose, 13

// k = 3
// can lose: 3
// coins: 6

// place 1 coin
// if win, 8
// if lose, 5
// lost, place 2 coins
// 5-2=3, 2*3=6, 3+6=9
// but if lost again,
// coins 5-2= 3
// till now lost 2 times
// place 3 coins'
// 3-3=0,

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










