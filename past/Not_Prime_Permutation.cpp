#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

bool isPrime(int n)
{
    if (n < 3)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool satis(vector<int> &v, vector<int> &w)
{

    for (int i = 0; i < v.size(); i++)
    {
        if (isPrime(v[i] + w[i]))
            return false;
    }
    return true;
}

void rotate(vector<int> &nums, int k)
{
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), w(n), orig(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        w[i] = v[i];
        orig[i] = v[i];
    }
    if (n <= 2)
    {
        cout << "-1" << endl;
        return;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     mp[orig[i]] = i;
    // }
    // unordered_map<int, int> mp;
    int idxforOne = -1;
    int thatNumber = -1;
    for (int i = 0; i < n; i++)
    {
        if (!isPrime(1 + v[i]))
        {
            thatNumber = v[i];
            idxforOne = i;
        }
    }
    if (idxforOne == -1)
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == idxforOne)
                cout << 1 << " ";
            else if (v[i] == 1)
                cout << thatNumber << " ";
            else
                cout << v[i] << " ";
        }
        cout << endl;
    }
    // sort(v.begin(), v.end());
    // sort(w.begin(), w.end());
    // int cnt = 1;
    // while (cnt <= n)
    // {
    //     if (satis(v, w))
    //     {
    //         cout << "here\n";
    //         for (int i = 0; i < n; i++)
    //             //     mp[v[i]] = w[i];
    //             cout << "for " << v[i] << " we have: " << w[i] << endl;
    //         break;
    //     }
    //     else
    //     {
    //         rotate(w, cnt);
    //     }
    //     cnt++;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << mp[orig[i]] << " ";
    // }
    // cout << endl;
}

// 25134
// 41532
// 66666//anse

// 12345
// 54321//anse

// 631524
// 213465

// 123456
// 345612

// 12345
// 12345

// 123456
// 123456

// 25134
// 25314

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