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
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0;
    int b1=0,b2=0,b3=0;
    b1=a[0],b2=a[1],b3=a[2];
    for(int i=1;i<n-2;++i){
        int ch=0;
        // cout<<b1<<" "<<b2<<" "<<b3<<endl;
        // cout<<endl;
        int navi=a[i+2];
        // cout<<"comp: "<<b1<<", "<<b2<<endl;
        // cout<<"comp: "<<b2<<", "<<b3<<endl;
        // cout<<"comp: "<<b3<<", "<<navi<<endl;
        // cout<<endl;
        // cout<<endl;
        if(b1!=b2)ch++;
        if(b2!=b3)ch++;
        if(b3!=navi)ch++;

        if(ch==1)ans++;

        b1=b2;
        b2=b3;
        b3=navi;
    }
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