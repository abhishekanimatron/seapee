class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time=0;
        int n=points.size();
        for(int i=1;i<n;i++){
            auto it1=points[i-1];
            auto it2=points[i];

            int x1=it1[0], y1=it1[1];
            int x2=it2[0], y2=it2[1];
            int xdiff=abs(x2-x1);
            int ydiff=abs(y2-y1);
            while(xdiff && ydiff){
                --xdiff;
                --ydiff;
                time++;
            }
            while(xdiff){
                --xdiff;
                time++;
            }
            while(ydiff){
                --ydiff;
                time++;
            }
        }
        return time;
    }
};