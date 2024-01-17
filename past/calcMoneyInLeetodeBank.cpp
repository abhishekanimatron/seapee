#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalMoney(int n)
    {
        int till = ceil((double)n / 7.0);
        int start = 1;
        int ans = 0;
        int daysRemaining=n;
        while(n>0){
            for(int day=0;day<min(n,7);day++)
                ans=ans+start+day;
            n=n-7;
            start++;
        }
        return ans;
    }
    
};
int main()
{
    Solution s;
    cout<<s.totalMoney(4)<<endl;
}
