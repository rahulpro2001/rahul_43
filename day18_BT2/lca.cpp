 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)return nullptr;
        if(p->val==root->val || q->val==root->val) return root;
        TreeNode * l =  lowestCommonAncestor(root->left,p,q);
        TreeNode *r = lowestCommonAncestor(root->right,p,q);
        if(l==nullptr)return r;
        if(r==nullptr)return l;
        return root;