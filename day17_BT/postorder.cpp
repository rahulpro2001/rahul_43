 vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr)return {};
        stack<TreeNode*> st1;
        stack<int> st;
        vector<int> ans;
        st1.push(root);
        while(st1.size())
        {
            TreeNode *temp = st1.top();st1.pop();
            st.push(temp->val);
            if(temp->left)st1.push(temp->left);
            if(temp->right)st1.push(temp->right);
        }
        while(!st.empty())
        {
            ans.push_back(st.top());st.pop();
        }
        return ans;
    }

    // while(st1)
    // temp st1 ka top
    // pop st1 push in st2
    // push temp->left in st1
    // push temp->right in st1
