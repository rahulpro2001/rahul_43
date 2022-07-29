    bool func(TreeNode *p,TreeNode *q)
    {
        if(p==nullptr || q==nullptr)return p==q;
        return (p->val==q->val and func(p->left,q->right) and func(p->right,q->left));
    }

    bool isSymmetric(TreeNode* root) {
        return func(root->left,root->right);
    }