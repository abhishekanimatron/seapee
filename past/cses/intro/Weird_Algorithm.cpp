#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
 
void solve()
{
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n>1){
        if(n&1){
            n=n*3+1;
        }else{
            n>>=1;
        }
        cout<<n<<" ";
    }
}
int main()
{
    solve();
}