int func(TreeNode *root,int &maxi)
    {
        if(root==nullptr) return 0;
        int l = func(root->left,maxi);
        int r = func(root->right,maxi);
        maxi = max(maxi,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
      int maxi = 0;
            func(root,maxi);
        return maxi;
    }
    //in this we will find the length from both side and add it and get the maximu addition i.e , max(l+r) always so have a var maxi pas it's address