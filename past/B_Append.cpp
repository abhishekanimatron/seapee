#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int c;
        int x;
        cin >> c >> x;
        if (c == 1)
        {
            a.push_back(x);
        }
        else
        {
            int sz=a.size();
            int ans=0;
            int cnt=0;
            for(int i=sz-1;i>=0 && cnt<x;i--){ans=a[i];cnt++;}
            cout<<ans<<endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--){
    solve();
    // }
    return 0;
}