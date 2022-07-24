void func(int &suc,int key,TreeNode<int> * root)
{
    while(root)
    {
        if(key<root->val)root=root->left;
        else 
        {
            suc = root->val;
            root= root->right;
        }
    }
}
int floorInBST(TreeNode<int> * root, int X)
{
    int ans;
    func(ans,X,root);
    return ans;
}

// it is same as finding the predecesor of the node