class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        // if(abs(height(root->left) - height(root->right))>1))
        vector<int>ino;
        inorder(root, ino);
        int n=ino.size();
        TreeNode* ans = buildTree(ino,0, n-1);
        return ans;
    }
    TreeNode* buildTree(vector<int>&ino, int low, int high){
        if(low>high)return nullptr;
        int mid=(low+high)/2;
        int midr=ino[n/2];
        TreeNode* root=new TreeNode(midr);
        root->left=buildTree(ino, low, mid-1);
        root->left=buildTree(ino, mid+1, high);
        return root;
    }
    int height(TreeNode* root){
        if(!root)return 0;
        int lh= height(root->left);
        int rh= height(root->right);
        return max(lh,rh)+1;
    }
    void inorder(TreeNode* r, vector<int>&ino){
        if(!r)return;
        inorder(r->left, ino);
        ino.push_back(r->val);
        inorder(r->right, ino);
    }
};
