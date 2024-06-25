#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    ll oursum = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        oursum += v[i];
    }
    // cout << sum << endl;
    cout << sum - oursum << endl;
}
int main()
{
    solve();
}
