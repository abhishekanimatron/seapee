#include<bits/stdc++.h>
using namespace std;
void solve(){
    long n,p,l,t;
    cin>>n>>p>>l>>t;
    vector<int>day(n+1, 0);
    for(int i=1;i<=n;i++){
        day[i]+=l;
        if(i%7 == 1){
            day[i]+=(2*t);
        }
    }
    bool pass=false;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=day[i];
    }
    if(sum>=p)
        pass=true;
    sum=0;
     for(int i=1;i<n;i++){
        sum+=day[i];
    }
    if(sum>=p)
        pass=true;
    cout<<endl;
    // int tasks=ceil((double)n/7);
    // int days=0;
    // while(p>0){
    //     p-=l;
    //     if(t>=2){
    //         p-=(2*t);
    //         t-=2;
    //     }
    //     if(t==1){
    //         p-=t;
    //         t-=1;    
    //     }
    //     days++;
    // }
    // int ans=n-days;
    // cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}