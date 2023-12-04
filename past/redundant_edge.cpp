class Solution{
    public:
    vector<int> findRedundantConnection(vector<vector<int>>&roads){
        int n=roads.size();
        vector<vector<int>>adj(n+1);
        vector<bool>vis(n+1);
        for(auto it:roads){
            fill(vis.begin(), vis.end(), false);
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            if(dfs(adj, vis, u))
                return it;
        }
        return {};
    }
    bool dfs(vector<vector<int>>&adj, vector<bool>&vis, int cur, int prev=-1){
        if(vis[cur])
            return true;
        vis[cur]=true;
        for(auto e:adj[cur]){
            if(e!=prev && dfs(adj, vis, e, cur))
                return true;
        }
        return false;
    }
};