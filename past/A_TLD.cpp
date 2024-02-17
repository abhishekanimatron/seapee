#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve(){
    // int n;
    // cin >> n;
    string s;
    cin>>s;
    int n=s.length();
    int i=n-1;
    string ans="";
    while(i>=0 && s[i]!='.'){
        ans+=s[i];
        i--;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
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