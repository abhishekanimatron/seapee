#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using ii = pair<lli,lli>;
using vii = vector<ii>;
using vi = vector<lli>;
#define double long double
#define fo(i,n)   for(int i=0;i<(n);++i)
#define repA(i,j,n)   for(int i=(j);i<=(n);++i)
#define repD(i,j,n)   for(int i=(j);i>=(n);--i)
#define all(x) begin(x), end(x)
#define eb emplace_back
#define X first
#define Y second
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
const int MOD = 1000000007;
const int MOD2 = 998244353;
const int INF = 1000000000;

void solve(){
    int x,y;
    cin>>x>>y;
    int ans=0;
    //one screen can hold 7 one pixels and 2 two pixels
    //or one screen can hold 15 one pixels 

    ans+=y/2;
    int ytook=y/2;
    while(ytook>0){
        --ytook;
        x-=7;
    }
    x=max(0,x);
    if(y&1){
        x-=11;
        ans++;
    }
    x=max(0,x);
    int xtook=x/15;
    ans+=xtook;
    x=x-15*xtook;
    if(x>0)ans++;
    cout<<ans<<endl;
}

signed main()
    {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}