class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            string ss;
            for(int j=i;j<n;j++){
                ss+=s[j];
                if(hasThree(ss))
                    cnt++;
            }
        }
        return cnt;
    }
    bool hasThree(string s){
        int a=0,b=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')a++;
            if(s[i]=='b')b++;
            if(s[i]=='c')c++;
            if(a&&b&&c)break;
        }
        return a&&b&&c;
    }
};