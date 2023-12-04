class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int count=0;
        long reach =0;
        int i=0;
        int nn=nums.size();
        while(reach < n){
            if(i<nn && nums[i]<=(reach+1)){
                reach+=nums[i];
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