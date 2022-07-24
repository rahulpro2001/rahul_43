    vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr)return  {};
        vector<int> ans;
        stack<TreeNode*> st;
        st.push(root);
        while(st.size())
        {
            TreeNode * temp = st.top();st.pop();
            ans.push_back(temp->val);
            if(temp->right)st.push(temp->right);
            if(temp->left)st.push(temp->left);
        }
        return ans;
    }

    // loop while st
    // pop
    // print
    // push right 
    // push left
    // end loop