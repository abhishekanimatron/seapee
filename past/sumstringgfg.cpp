 int isSumString(string s){
        int n=s.size();
        for(int i=1;i<n;i++){
            for(int j=1;i+j<n;j++){
                if(possi(s,0,i,j,n))
                    return 1;
            }
        }
        return 0;
    }

    bool possi(string s, int idx, int l1, int l2, int n){
        string as=s.substr(idx, l1);
        string bs=s.substr(idx+l1, l2);
        string cs=add(as,bs);
        int csLen=cs.size();
        if(csLen > n-l1-l2-idx)
            return false;
        string xcs= s.substr(idx+l1+l2, csLen);
        if(cs == xcs)
        {
            if(idx+l1+l2+csLen == n)
                return true;
            else
                return possi(s, idx+l1, l2,csLen, n);
        }
        return false;
    }
    
    string add(string a, string b){
        int ai=a.size()-1, bi=b.size()-1;
        string ans="";
        int c=0;
        while(ai || bi || c){
            int sum=c;
            if(ai>=0)
                sum+=a[ai--]-'0';
            if(bi>=0)
                sum+=b[bi--]-'0';
            int r=sum%10;
            c=sum/10;
            ans.push_back(r+'0');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }