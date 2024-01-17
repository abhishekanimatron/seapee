#include <bits/stdc++.h>
# include <stack>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ct=0,c=0;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='b'){
                ct++;
                continue;
            }else if(s[i]=='B'){
                c++;
                continue;
            }else if(islower(s[i]) && ct>0){
                ct--;
                continue;
            }else if(isupper(s[i]) && c>0){
                c--;
                continue;
            }
            ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()==0) cout << endl;
        else cout << ans << endl;
    }
}