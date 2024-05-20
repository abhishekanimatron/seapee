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
    string ss;
    int n;
    cin>>n;
    cin>>ss;
    string s="";
    vector<int>a(26,0);
    for(char c:ss){
        a[c-'a']=1;
    }
    for(int i=0;i<26;++i){
        if(a[i]==1){
            s=s+char(i+'a');
        }
    }
    // cout<<s<<endl;


    int l=0,r=n-1;
    string ans="";
    bool isr=true;
    int cnt=1;
    while(cnt<n/2){
        char t=s[l];
        s[l]=s[r];
        s[r]=t;
        l++;r--;
        cnt++;
    }
    cout<<s<<endl;
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