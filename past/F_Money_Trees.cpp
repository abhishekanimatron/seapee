#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,k;
    cin>>n>>k;
    //for sum of chosen trees
    ll prefixSum[n+1];
    prefixSum[0]=0;
    for(int i=1;i<=n;i++){
        cin>>prefixSum[i];
        prefixSum[i]+=prefixSum[i-1];
    }
    int hei[n];
    for(int i=0;i<n;i++){
        cin>>hei[i];
    }
    ll low=1;
    ll high=n;
    int ans=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        ll prev=0;
        ll val=k+1;
        for(int i=1;i<n;i++){
            if(hei[i-1]%hei[i] != 0){
                prev=i;
            }
            int curlen=i-prev+1;
            if(curlen>=mid){
                val=min(val, prefixSum[i+1]-prefixSum[i-mid+1]);
            }
        }
        if(val<=k){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
}