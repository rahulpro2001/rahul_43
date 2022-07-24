class Solution {
public:
    TreeNode *func(TreeNode *root,int key)
    {
        if(root==nullptr) return new TreeNode(key);
        if(root->val>key)root->left = func(root->left,key);
        else root->right = func(root->right,key);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& p) {       
        TreeNode *root=nullptr;
        for(int i=0;i<p.size();i++)root = func(root,p[i]);
        return root;
    }
};