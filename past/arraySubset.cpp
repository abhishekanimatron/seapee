unordered_map<int,int>freq;
for(int i=0;i<n;i++){
    freq[a1[i]]++;
}
for(int i=0;i<m;i++){
    freq[a2[i]]--;
    if(freq[a2[i]])<0)
        return false;
}
return true;