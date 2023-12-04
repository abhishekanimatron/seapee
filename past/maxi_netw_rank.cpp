class Solution{
    public:
        int maximalNetworkRank(int n, vector<vector<int>>&roads){
            vector<vector<int>>adj(n);
            for(auto it:roads){
                int u=it[0];
                int v=it[1];
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
            int ans=INT_MIN;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    int ir=adj[i].size();
                    int jr=adj[j].size();
                    int total=ir+jr;
                    if(find(adj[i].begin(), adj[i].end(), j) != adj[i].end()){
                        --total;
                    }
                    ans=max(ans,total);
                }
            }
            return ans;
        }
}