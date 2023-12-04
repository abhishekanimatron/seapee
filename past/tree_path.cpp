class Solution{
    public:
    vector<string> binaryTreePaths(TreeNode* r){
        vector<string>ans;
        dfs(r,ans,"");
        return ans;
    }
    void dfs(TreeNode* r, vector<string>&ans, string cur){
        cur+=to_string(r->val);
        if(r->left){
            dfs(r->left, ans, cur);
        }
        if(r->right){
            dfs(r->right, ans, cur);
        }
        if(!r->left && !r->right){
            ans.push_back(cur);
            cur="";
        }
    }
};