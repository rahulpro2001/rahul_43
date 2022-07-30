class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        while(root){st.push(root);root=root->left;}
    }
    
    int next() {
        TreeNode* node = st.top();st.pop();
        int ans= node->val;
        if(node->right)
        {
            node = node->right;
            while(node){st.push(node);node=node->left;}
        }
        return ans;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};
//O(1) tc
// o(H) sc