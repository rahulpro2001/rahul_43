int flag = 0;
    void func(TreeNode* root, unordered_map<int,int> &mp, int k)
    {
        if(root)
        {
            func(root->left,mp,k);
            if(mp[ k- root->val]!=0){flag=1;return;}
            else mp[root->val]++;
            func(root->right,mp,k);   
        }
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> mp;
        func(root,mp,k);
        if(flag)return true;
        return false;
    }