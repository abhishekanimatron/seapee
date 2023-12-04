#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        if(A[i]==k)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}