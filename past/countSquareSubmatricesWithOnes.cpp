#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSquares(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int squares = 0;
        for (int i = 0; i < n; i++)
        {
            if (mat[i][0] == 1)
            {
                dp[i][0] = 1;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (mat[0][i] == 1)
            {
                dp[0][i] = 1;
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (mat[i][j] == 1)
                {
                    dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                squares += dp[i][j];
            }
        }
        return squares;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {{1, 0, 1},
                             {1, 1, 0},
                             {1, 1, 0}};
    cout << s.countSquares(v);
    cout << endl;
}