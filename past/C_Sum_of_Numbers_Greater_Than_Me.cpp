#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>x(n);
    for(auto &e:x){
        cin>>e;
    }
    vector<int>y=x;
    map<int,int>mp;
    int curr_sum=accumulate(x.begin(), x.end(), 0LL);
    sort(y.begin(), y.end());
    int cur_ele=y[0];
    curr_sum-=y[0];
    for(int i=1;i<n;i++){
        if(cur_ele!=y[i]){
            mp[cur_ele]=curr_sum;
            cur_ele=y[i];
        }
        curr_sum-=y[i];
    }
    for(int i=0;i<n;i++){
        cout<<mp[x[i]]<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}