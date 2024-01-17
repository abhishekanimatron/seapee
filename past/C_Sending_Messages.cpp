#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    ll mes[n];
    for (int i = 0; i < n; i++)
        cin >> mes[i];
    ll prev = 0;
    bool dead = false;
    for (int i = 0; i < n; i++)
    {
        ll diff = mes[i] - prev;
        ll dailycost = a * diff;
        if (dailycost < b)
            f -= dailycost;
        else
            f -= b;

        if (f <= 0)
        {
            dead = true;
            break;
        }
        prev = mes[i];
        // cout << "charging: " << f << endl;
    }
    if (dead)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

// 1 3 1 5
// 3

// initial charge - a*(till message day)
// 3-1*(3)=0
// onoff time 5 > inital charge

// 7 21 1 3
// 4 6 10 13 17 20 26
// inital =21, for 4th message as 3 < (a * messageday) so do it // ans+=4
// charging left=21-3= 18

// 2 days till 6, 1*2=2 which is less than 3 so keep it on// 16 left now

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}