#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    string si;
    string fi;
    cin >> si >> fi;
    int so = 0, fo = 0, sz = 0, fz = 0;
    int ans = 0;
    int tans = 0;
    // cout << "here\n";
    for (int i = 0; i < n; i++)
    {
        // if ((si[i] == '0' && fi[i] == '1') || (si[i] == '1' && fi[i] == '0'))
        //     ans++;
        if (si[i] == '0')
            sz++;
        if (si[i] == '1')
            so++;
        if (fi[i] == '1')
            fo++;
        if (fi[i] == '0')
            fz++;
        if (si[i] == '0' && fi[i] == '1')
            ans++;
        if (si[i] == '1' && fi[i] == '0')
            tans++;
    }

    cout << max(ans, tans) << endl;

    //10010
    //00001
    // 0 to 1
    //1 to 0, 1 to 0 //ans2
    //2nd clear
    // 000
    // 111
    //0to3//ans3

    //0101
    //1010
    // 0 to1 0 to1//both 2

    //100
    //101
    //0 to 1//1
    //ans 1

    // 10011001
    // 11111110
    // 0 to1,//4
    // 1 to 0// 1

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