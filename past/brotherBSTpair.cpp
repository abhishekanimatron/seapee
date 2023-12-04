class Solution
{
public:
    int countPairs(Node *root1, Node *root2, int x)
    {
        vector<int> v1, v2;
        inorder(root1, v1);
        inorder(root2, v2);
        int cnt=0;
        for(int i=0;i<v1.size();i++){
            int target=x-v1[i];
            if(binary_search(v2.begin(), v2.end(), target))
                cnt++;
        }
        return cnt;
    }
    void inorder(Node *root, vector<int> &ino)
    {
        if (!root)
            return;
        inorder(root->left,ino);
        ino.push_back(root->data);
        inorder(root->right,ino);
    }
};