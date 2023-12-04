#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,s,m,l;
    cin>>n>>s>>m>>l;
    int ans=INT_MAX;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            for(int k=0;k<=100;k++){
                if(i*6+ j*8 + k*12 >= n){
                    ans=min(ans,i*s+j*m+k*l);
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}