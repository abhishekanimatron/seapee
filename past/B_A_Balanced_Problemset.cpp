#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n, x;
    cin >> x >> n;
    if (x == n)
    {
        cout << "1" << endl;
        return;
    }
    int div = x / n;
    set<int> st;
    int some = 0;
    for (int i = 1; i*i <= x; i++)
    {
        // cout << "here\n";
        if (x % i == 0){
            st.insert(i);
        }
    }
    auto it = st.lower_bound(div);
    if (*it> div)
        --it;
    // else
        cout << *it << endl;

    // cout << "mod" << 420 /69 << endl;
    // cout << "mod" << 420 %69 << endl;
    // int r = x % n;
    // if ()
    //     cout << div << endl;
    // else
    //     cout << div - r << endl;
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

// 420/69=6
// 420/

// 10/3 = 3, 3

// 10%3=1
// 10/3=3

// 2

// 5%5=0
// 5/5=1

// 1

// 420%69 = 6
// 420/69=6