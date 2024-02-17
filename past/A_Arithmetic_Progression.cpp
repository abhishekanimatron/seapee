#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve(){
    int a,b,d;
    cin >> a>>b>>d;
    for(int i=a;i<=b;i+=d){
        cout<<i<<" ";
    }
}

signed main()
    {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--){
        solve();
    // }
    return 0;
}