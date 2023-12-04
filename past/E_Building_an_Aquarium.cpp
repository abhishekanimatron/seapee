#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    ll x;
    cin>>n>>x;
    ll A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    ll low=0;
    ll high=2'000'000'007;
    while(low<high){
        ll mid=low+(high-low+1)/2;

        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=max(mid-A[i],0ll);
        }
        if(sum<=x){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    cout<<low<<endl;
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
}