#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &pts)
    {
        sort(pts.begin(), pts.end());
        int ans = 1;
        int n = pts.size();
        if (n == 1)
            return 1;
        int l = pts[0][1];
        for (int i = 0; i < n; i++)
        {
            if (l < pts[i][0])
            {
                ans++;
                l = pts[i][1];
            }
            else
            {
                l = min(l, pts[i][1]);
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {{1, 6}, {2, 8}, {7, 12}, {10, 16}};
    vector<vector<int>> u = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    vector<vector<int>> w = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout << s.findMinArrowShots(v) << endl;
    cout << s.findMinArrowShots(u) << endl;
    cout << s.findMinArrowShots(w) << endl;
}