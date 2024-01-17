#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<char> rows = {'1', '2', '3', '4', '5', '6', '7', '8'};
    vector<char> cols = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    string pos;
    cin >> pos;
    char col = pos[0];
    char row = pos[1];
    vector<string>ans;
    for(char r:rows){
        if(r!=row){
            string x="";
            x+=col;
            x+=r;
            ans.push_back(x);
        }
    }
    for(char c:cols){
        if(c!=col){
            string x="";
            x+=c;
            x+=row;
            ans.push_back(x);
        }
    }

    for(string s:ans){
        cout<<s<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}