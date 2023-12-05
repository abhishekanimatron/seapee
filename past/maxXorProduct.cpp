#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumXorProduct(long long a, long long b, int n)
    {
        const int MOD=1e9+7;
        int limit=pow(2,n);
        int ans=INT_MIN;
        for(int i=0;i<limit;i++){
            int cur = ((a^i)*(b^i))%MOD;
            ans=max(ans, cur);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.maximumXorProduct(1,6,3) << endl;
}