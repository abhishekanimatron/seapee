class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int amount) {
        int count=0;
        long reach =0;
        int i=0;
        int n=coins.size();
        while(reach < amount){
            if(i<n && coins[i]<=(reach+1)){
                reach+=coins[i];
                i++;
            }
            else {
                reach+=reach+1;
                count++;
            }
        }
        return count;
    }
};