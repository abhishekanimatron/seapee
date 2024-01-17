#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

const int nmax = 1e6 + 5;
const int inf = 1e9 + 5;
int n, k, m, q;
vector<int> g[nmax];
int v[nmax];

static void testcase()
{
    string s;
    cin>>s;
    int ans=0;
    int prev=1;
    for(int i=0;i<s.length();i++){

        int c=s[i]-'0';
        if(c==0)c=10;
        ans+=abs(c-prev);
        ans+=1;
        prev=c;
    }
    cout<<ans<<endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        testcase();
}
