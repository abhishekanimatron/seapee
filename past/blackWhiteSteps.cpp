#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumSteps(string s) {
        long long steps=0;
        int n=s.length();
        int nextOneIndex=-1;
        long long zeroesTillNextOne=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                long long zs=countZeroes(s,i,n,nextOneIndex, zeroesTillNextOne);
                zeroesTillNextOne=zs;
                nextOneIndex=i;
                steps+=zs;
            }
        }
        return steps;
    }
    int countZeroes(string &s, int k,int n, int nextOneIndex, long long zeroesTill){
        int z=0;
        if(nextOneIndex==-1){
            for(int i=k+1;i<n;i++){
                if(s[i]=='0')
                    z++;
            }
        }
        else{
            for(int i=k+1;i<nextOneIndex;i++){
                if(s[i]=='0')
                    z++;
            }
            z+=zeroesTill;
        }
        return z;
    }
};

int main(){
    Solution s;
    cout<<s.minimumSteps("1100")<<endl;
}