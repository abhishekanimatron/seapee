class Solution {
public:
    vector<vector<int>>levelOrder(TreeNode* root) {
       vector<vector<int>>ans;
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
            int sz=q.size();
            vector<int>v;
            for(int i=0;i<sz;i++){
                auto t=q.front();q.pop();
                v.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            ans.push_back(v);
       }
        return ans;
    }
};
