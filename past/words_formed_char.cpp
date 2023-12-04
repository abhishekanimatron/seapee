class Solution{
    public:
    int countCharacters(vector<string>&words, string chars){
        int n=words.size();
        vector<int>freq(26, 0);
        for(char c:chars)
            freq[c-'a']++;
        int ans=0;
        for(auto s:words){
            vector<int>sfreq(26, 0);
            for(char c:s)
                sfreq[c-'a']++;
            bool flag=true;
            for(char c:s){
                if(sfreq[c-'a']> freq[c-'a']){
                    flag=false;break;
                }
            }
            if(flag){
                ans+=s.size();
            }
        }
        return ans;
    }
    bool possible(string s, vector<bool>&freq){
        for(auto c:s){
            if(!freq[c-'a'])
                return false;
            else{
                freq[c-'a']=false;
            }
        }
        return true;
    }
};