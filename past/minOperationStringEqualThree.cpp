#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {

        int i=0,j=0,k=0;
        int s1len=s1.length();
        int s2len=s2.length();
        int s3len=s3.length();
        // int minlen=min(s1len, min(s2len, s3len));
        // string minS=s1len==minlen?s1:s2len==minlen?s2:s3;
        string minS="";
        while(i<s1.length() && j<s2.length() && k<s3.length()){
            if(s1[i]==s2[j] && s1[i]==s3[k]){
                minS+=s1[i];
                i++;j++;k++;
            }
            else
                break;
        }
       // cout<<minS<<endl;
        int x=0;
        while(s1!=minS && s1.length()){
            s1=s1.substr(0, s1.length()-1);
            x++;
        }
        if(s1.length()==0)
            return -1;
        while(s2!=minS && s2.length()){
            s2=s2.substr(0, s2.length()-1);
            x++;
        }
        if(s2.length()==0)
            return -1;
        while(s3!=minS && s3.length()){
            s3=s3.substr(0, s3.length()-1);
            x++;
        }
        if(s3.length()==0)
            return -1;
        return x;
    }
};

int main(){
    Solution s;
    cout<<s.findMinimumOperations("oby", "obz", "obf")<<endl;
}