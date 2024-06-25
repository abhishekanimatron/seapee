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
    string s;
    cin >> s;
    int ans=0,cnt=0,i=0,j=0;
    for(;j<s.size();){
        char cur=s[i];
        cnt=1;
        j++;
        while(j<s.size() && s[j]==cur){
            ++cnt;
            j++;
        }
        i=j;
        ans=max(ans,cnt);
    }
    cout<<ans;
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