#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using ii = pair<lli, lli>;
using vii = vector<ii>;
using vi = vector<lli>;
#define double long double
#define fo(i, n) for (i = 0; i < (n); ++i)
#define repA(i, j, n) for (i = (j); i <= (n); ++i)
#define repD(i, j, n) for (i = (j); i >= (n); --i)
#define all(x) begin(x), end(x)
#define eb emplace_back
#define X first
#define Y second
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
const int MOD = 1000000007;
const int MOD2 = 998244353;
const int INF = 1000000000;

void solve()
{
    int n;
    cin >> n;

    class Solution
    {
    public:
        long long largestSquareArea(vector<vector<int>> &bottomLeft, vector<vector<int>> &topRight)
        {
            long long ans = 0;
            // int ld=1,rd=0;
            int n = bottomLeft.size();

            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    long long x1 = max(bottomLeft[i][0], bottomLeft[j][0]);
                    long long y1 = max(bottomLeft[i][1], bottomLeft[j][1]);
                    long long x2 = min(topRight[i][0], topRight[j][0]);
                    long long y2 = min(topRight[i][1], topRight[j][1]);

                    if (x1 < x2 && y1 < y2)
                    {
                        long long side = min(x2 - x1, y2 - y1);
                        ans = max(ans, side * side);
                    }
                }
            }

            return ans;
        }
    };
}

class Solution
{
public:
    long long largestSquareArea(vector<vector<int>> &bottomLeft, vector<vector<int>> &topRight)
    {
        long long ans = 0;
        // int ld=1,rd=0;

        for (int i = 0; i < bottomLeft.size() - 1; i++)
        {
            long long x2 = topRight[i][0];
            long long y2 = topRight[i][1];

            long long x1 = bottomLeft[i + 1][0];
            long long y1 = bottomLeft[i + 1][1];

            // cout<<x1<<" "<<y1<<endl;
            // cout<<x2<<" "<<y2<<endl;

            long long diffx = x2 - x1;
            long long diffy = y2 - y1;
            if (diffx < 0 || diffy < 0)
                continue;
            long long diff = min(diffx, diffy);
            long long area = diff * diff;
            ans = max(ans, area);
        }

        return ans;
    }
};

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}