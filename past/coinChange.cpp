class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int change = possible(coins, amount, n-1,dp);
        if(change>=1e9)
            return -1;
        else
            return change;
    }
    int possible(vector<int>&coins, int amount, int idx, vector<vector<int>>&dp)
    {
        if(idx==0){
            if(amount%coins[idx]==0)
                return amount/coins[idx];
            else
                return 1e9;
        }
        if(dp[idx][amount]!=-1)
            return dp[idx][amount];
        int nopick=possible(coins, amount, idx-1,dp);
        int pick=1e9;
        if(coins[idx]<=amount )
            pick=possible(coins, amount-coins[idx], idx,dp)+1;
        return dp[idx][amount]=min(pick, nopick);
    }
};