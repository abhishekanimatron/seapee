    class Solution {
    public:
        TreeNode* reverseOddLevels(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
                int sz=q.size();
                vector<int>v;
                for(int i=0;i<sz;i++){
                    auto t=q.front();q.pop();
                    v.push_back(t->val);
                    if(t->left)q.push(t->left);
                    if(t->right)q.push(t->right);
                }
                if(cnt%2)
                    reverse(v.begin(), v.end());
                ans.push_back(v);
                cnt++;
        }
            return ans;
        }
    };
