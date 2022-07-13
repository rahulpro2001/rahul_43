 bool func(TreeNode *root,vector<int> &ans,int val)
 {
       if(root==nullptr) return false;
        ans.push_back(root->val);
        if(root->val==val)return true;    
        if(func(root->left,ans,val) || func(root->right,ans,val)) return true;
        ans.pop_back();
        return false;
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    if(func(A,ans,B)) return ans;
    return {};
}

// If root = NULL, return false.
// push the root’s data into arr[].
// if root’s data = x, return true.
// if node x is present in root’s left or right subtree, return true.
// Else remove root’s data value from arr[] and return false.