#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int bot, int val) {
        int ans=bot;
        while(bot >= val){
            int rem=bot%val;
            bot/=val;
            ans+=bot;
            bot+=rem;
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.numWaterBottles(15,4)<<endl;
}