#include <bits/stdc++.h>
using namespace std;
int main()
{
    int months, days;
    cin >> months >> days;
    int y, m, d;
    cin >> y >> m >> d;
    if(d<days)
        cout<<y<<" "<<m<<" "<<d+1<<endl;
    else if(m<months)
        cout<<y<<" "<<m+1<<" "<<1<<endl;
    else
        cout<<y+1<<" "<<1<<" "<<1<<endl;
    return 0;
}