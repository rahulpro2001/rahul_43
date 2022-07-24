class Solution {
public:
    TreeNode *build(vector<int>& preorder,int prestr,int prend,vector<int>& inorder,int instr,int inend, map<int,int> &inmp)
    {
        if(prestr>prend || instr>inend)return nullptr;
        TreeNode *root = new TreeNode(preorder[prestr]);
        int inroot = inmp[root->val]; 
        int numleft = inroot - instr;
        root->left = build(preorder,prestr+1,prestr+numleft,inorder,instr,inroot-1,inmp);
        root->right = build(preorder,prestr+numleft+1,prend,inorder,inroot+1,inend,inmp);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inmp;
        for(int i=0;i<inorder.size();i++)inmp[inorder[i]] = i;
        TreeNode *root = build(preorder,0,preorder.size()-1,inorder,0,inorder.size(),inmp);
        return root;
    }
};