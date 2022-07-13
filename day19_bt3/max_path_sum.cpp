// same as diameter take maximu from val + left +right 
// as we calculate height 1 + max(l,r)   instaed of this we will be returning val + max(left,right)
 int func(TreeNode *root,int &maxi)
    {
        if(root==nullptr) return 0;
        int l = func(root->left,maxi);
        int r = func(root->right,maxi);
        maxi = max(maxi,l+r+root->val);
        return max(0,root->val + max(l,r));
    }
    
    int maxPathSum(TreeNode* root) {
        int maxi = root->val;
        func(root,maxi);
        return maxi;
    }