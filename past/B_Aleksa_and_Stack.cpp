#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    // vector<int>v(n);
    // v[0]=1;
    // v[1]=3;
    // for(int i=2;i<n;i++){
    //     int cur=v[i-1]+1;
    //     while((cur*3) % (v[i-1]+v[i-2]))
    //         cur++;
    //     v[i]=cur;
    // }
    for(int i=0;i<n;i++)
        cout<<(2*i)+1<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}