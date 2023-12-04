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
        vector<bool>vis(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                int edges=0, n=0;
                dfs(adj, i, vis, edges,n);
                int cur=edges == n*(n-1);
                ans+=cur;
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>&adj, int cur, vector<bool>&vis, int &edges, int &cnt){
        if(vis[cur])return;
        vis[cur]=true;
        cnt++;
        edges+=adj[cur].size();
        for(auto it:adj[cur]){
            dfs(adj, it, vis, edges,cnt);
        }
    }
};