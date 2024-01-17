#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        int cnt = 0;
        int l = 0, r = 0;
        int wind = 0;
        while (r < n)
        {
            if (a[r] >= L && a[r] <= R)
                wind = r - l + 1;
            else if (a[r] > R)
            {
                l = r + 1;
                wind = 0;
            }
            cnt += wind;
            r++;
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    // int a[] = {2, 0, 11, 3, 0};
    // cout << s.countSubarrays(a, 5, 1, 10) << endl;
    int a[] = {3, 4, 1};
    cout << s.countSubarrays(a, 3, 2, 4) << endl;
}
