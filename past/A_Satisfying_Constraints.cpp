#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll a, n, x;
    cin >> n;
    ll minBound=LONG_MIN, maxBound=LONG_MAX;
    unordered_set<ll> forb;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> x;
        if (a == 1)
        {
            minBound = max(minBound, x);
        }
        else if (a == 2)
        {
            maxBound = min(maxBound, x);
        }
        else if (a == 3)
        {
            forb.insert(x);
        }
    }
    // for(auto it:forb)cout<<it<<endl;
    // cout<<"min: "<<minBound<<endl;
    // cout<<"size: "<<forb.size()<<endl;
    // cout<<"max: "<<maxBound<<endl;
    ll fn=static_cast<ll>(forb.size());
    for(auto it:forb){
        if(it<minBound || it>maxBound)fn--;
    }
    ll ans = max(0LL,maxBound-minBound+1-fn);
    // for (int i = minBound; i <= maxBound; i++)
    // {
    //     auto val = forb.find(i);
    //     if (val != forb.end())
    //         continue;
    //     else
    //         ans++;
    // }
    cout<<ans<<endl;
}

int T = 0;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}