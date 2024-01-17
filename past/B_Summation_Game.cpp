#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    // the number of elements in the array,
    // the limit on the number of elements of the array that Alice can remove,
    // the limit on the number of elements of the array that Bob can multiply −1 to
    int A[n];
    vector<int> high;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        high.push_back(A[i]);
        sum += A[i];
    }
    int origsum = sum;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    sort(high.begin(), high.end(), greater<int>());
    high.resize(x);

    // negsum
    int negsum = 0;
    for (auto it : high)
    {
        // cout << "high: " << it << endl;
        sum -= it;
        sum -= it;
        negsum += it;
    }
    // cout << "origsum: " << origsum << endl;
    if (origsum - negsum >= negsum)
    {
        int hn = high.size();
        int cnt = 0;
        for (int i = 0; i < hn && cnt < k; i++)
        {
            // cout << "highde: " << high[i] << endl;
            origsum -= high[i];
        }
        cout << origsum << endl;
    }
    else
        cout << 0 << endl;
    // cout << "origsum: " << origsum << endl;
    // cout << "sum: " << sum << endl;
    // alice will remove all -ve numbers, if only 1 element removes it so that bob can't make it -ve
    // if alice has all +ve elements she won't remove any
    // bob makes x highest numbers to 1

    // if sum of negative numbers

    //   a b
    // 1 1 1  -----n,k,x
    // 1 -----array

    //   a b
    // 4 1 1  -----n,k,x
    // 3 1 2 4
    // alice 3124
    // bob 3,2,1,-4 = 2

    //   a b
    // 6 6 3
    // 1 4 3 2 5 6
    // 654 -ve
    // 6+5+4=15
    // 1+2+3=6

    // sum=21-negsum < negsum, remove k highest elements

    // alice doesn't remove any
    // bob makes 3 numbers negative
    // 1 2 3 -4 -5 -6
    // alice removes all
    // 1 2 3
    // bob doesn't do anything
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}