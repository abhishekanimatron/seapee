#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int>getRow(int rowIndex)
    {
        vector<int>prev={1};
        vector<int>cur;
        if(rowIndex==0)
            return prev;

        for(int i=0;i<rowIndex;i++){
            cur.resize(prev.size()+1);
            cur[0]=1;
            cur[cur.size()-1]=1;
            for(int j=1;j<cur.size()-1;j++){
                cur[j]=prev[j-1]+prev[j];
            }
            prev=cur;
        }
        return cur;
    }
};

int main()
{
    Solution s;
    vector<int> ans= s.getRow(3);
    for(int i:ans)
        cout<<i<<" ";
    cout<<endl;
}