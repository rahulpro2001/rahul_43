 TreeNode* build(vector<int>& p,int prstr,int pend,vector<int>& i,int istr,int iend, unordered_map<int,int> &imp)
    {
        if(prstr>pend || istr>iend)return nullptr;
        TreeNode *root = new TreeNode(p[pend]);
        int inroot = imp[root->val];
        int numleft = inroot - istr;
        root->left = build(p,prstr,prstr+numleft-1,i,istr,inroot-1,imp);
        root->right = build(p,prstr+numleft,pend-1,i,inroot+1,iend,imp);
        return root;
    }
    TreeNode* buildTree(vector<int>& i, vector<int>& p) {
        unordered_map<int,int> imp;
        for(int it=0;it<i.size();it++)imp[i[it]]=it;
        TreeNode *root = build(p,0,p.size()-1,i,0,i.size()-1,imp);
        return root;
    }
};