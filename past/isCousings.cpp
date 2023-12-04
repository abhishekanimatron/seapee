class Solution
{
public:
    int xp, yp, xd, yd;
    bool isCousins(TreeNode *r, int x, int y)
    {
        depth(r, x, y, 0,0);
        return (xd == yd && xp != yp);
    }
    void depth(TreeNode *r, int x, int y, int cur, int prev)
    {
        if (!r)
            return;
        if (r->val == x){
            xd = cur;
            xp=prev;
            return;
        }
        if (r->val == y){
            yd = cur;
            yp=prev;
            return;
        }
        depth(r->left, x, y, cur + 1, r->val);
        depth(r->right, x, y, cur + 1,r->val);
        return 0;
    }
};