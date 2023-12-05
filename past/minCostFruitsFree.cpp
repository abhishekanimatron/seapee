#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCoins(vector<int>& prices) {
        int n=prices.size();
        vector<int>dp(n,-1);        
        return solve(n-1, prices, dp);
    }
    int solve(int i, vector<int>&prices, vector<int>&dp){
        if(i==0)
            return prices[0];
        if(dp[i]!=-1)
            return dp[i];
        int buy=solve(i-1, prices, dp)+prices[i];
        int free=solve(i-1, prices, dp)+prices[i];

        return dp[i]=min(buy,free);
    }
};