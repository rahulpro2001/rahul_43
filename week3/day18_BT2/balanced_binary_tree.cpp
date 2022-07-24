class Solution {
public:
    int func(TreeNode *root)
    {
       if(root==nullptr) return 0;
        int l= func(root->left);
        if(l==-1) return -1;
        int r = func(root->right);
        if(r==-1) return -1;
        if(abs(l-r)>1) return -1;
        return max(l,r)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        if(func(root)==-1)return false;
        return true;
    }
};