#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
#define double long double
#define fo(i, n) for (i = 0; i < (n); ++i)
#define repA(i, j, n) for (i = (j); i <= (n); ++i)
#define repD(i, j, n) for (i = (j); i >= (n); --i)
#define all(x) begin(x), end(x)
#define eb emplace_back
#define X first
#define Y second
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
const int MOD = 1000000007;
const int MOD2 = 998244353;
const int INF = 1000000000;

// int solver(int n, vector<int> &dp)

int func(int id,string&s){
    int ans=0;
    if(id>=s.length())return 0;
    if(s[id]=='*')return 0;
    // while(id<s.length()){
        char cur=s[id];
        if(cur=='@')ans++;
        
        // if(s[id+1]=='*'||s[id+2]=='*')return 0;
        ans+=max(func( id+1,s),func(id+2,s));
    // }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    // vector<int> dp(n + 1, -1);
    string s;
    cin >> s;
    // int i=0;
    int ans=func(0,s);
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}