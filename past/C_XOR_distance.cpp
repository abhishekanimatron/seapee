#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define double long double
const int MOD = 1000000007;

void solve()
{
    int a, b, r;
    cin >> a >> b >> r;

}

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

// a= 4
// b= 6
// r= 0

// 4xor0 is 100
// 6xor0 is 110
// 4-6 = 2 //mod


// a= 0
// b= 3
// r= 2

// r=0
//0xor0 is 00
//3xor0 is 11
// 0-3 = 3

// r=1
//0xor1 is 01
//3xor1 is 10
// 1-2 = 1
//
// r=2
//0xor2 is 10
//3xor2 is 01
// 2-1 = 1

// a=2
// b=7
// r=2

// r=0
// 0xor2 is 010
// 0xor7    111
// 7-2=5
// 
// r=1
// 1xor2 is 011
// 1xor7    110
// 6-3=3
// 
// r=2
// 2xor2 is 000
// 2xor7 is 101
// 5-0=5
// 010
// 111
// 101// xor value


//