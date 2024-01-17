#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    vector<pair<int, int>> v;
    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    int xd = abs(v[0].second - v[1].second);
    int yd = abs(v[2].first - v[3].first);
    // cout<<v[0].first<<" "<<v[0].second<<endl;
    // cout<<v[1].first<<" "<<v[1].second<<endl;
    // cout << "xd: " << xd << endl;
    cout << xd * xd << endl;
}

int T = 0;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}