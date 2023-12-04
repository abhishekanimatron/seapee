#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximizeSquareHoleArea(int gn, int gm, vector<int>& hBars, vector<int>& vBars) {

        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());

        int maxh=1;
        int maxv=1;
        int curh=1;
        for(int i=1;i<hBars.size();i++){
            if(hBars[i]==hBars[i-1]+1)
                curh++;
            else{
                curh=1;
            }
            maxh=max(maxh, curh);
        }
        int curv=1;
        for(int i=1;i<vBars.size();i++){
            if(vBars[i]==vBars[i-1]+1)
                curv++;
            else{
                curv=1;
            }
            maxv=max(maxv, curv);
        }
        int dist=min(maxh+1, maxv+1);
        return dist*dist;
    }
};