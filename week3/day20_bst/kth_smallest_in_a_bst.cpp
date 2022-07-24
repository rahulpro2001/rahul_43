class Solution {
public:
    int val=-1;
    void func(TreeNode* root, int k,int &cnt)
    {
        if(root)
        {
            func(root->left,k,cnt);
            cnt++;
            if(k==cnt){val =root->val;return;}
            func(root->right,k,cnt);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt =0;
        func(root,k,cnt);
        return val;
    }
};