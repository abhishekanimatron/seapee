#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int o=0,z=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        s[i]=='1'?o++:z++;
        if(o>=0 && z>0){
            cout<<"YES\n";
            flag=true;
            break;
        }
    }
    if(!flag)
        cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}