#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string x=alter1(n);
        string y=alter2(n);
        int cnt1=0, cnt2=0;
        for(int i=0;i<n;i++){
            if(s[i]!=x[i])
                cnt1++;
        }
        
        for(int i=0;i<n;i++){
            if(s[i]!=y[i])
                cnt2++;
        }
        return min(cnt1,cnt2);
        
    }
    string alter1(int n){
        string s="";
        for(int i=0;i<n;i++){
            if(i%2)
                s+='1';
            else
                s+='0';
        }
        return s;
    }
    string alter2(int n){
        string s="";
        for(int i=0;i<n;i++){
            if(i%2)
                s+='0';
            else
                s+='1';
        }
        return s;
    }
};