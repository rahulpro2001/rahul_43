vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool zig =true;
        while(!q.empty())
        {
            int n = q.size();
            vector<int> temp(n); 
            for(int i=0;i<n;i++)
            {
                int ind = zig ? i : (n-i-1);
                TreeNode *node = q.front();q.pop();
                temp[ind] = node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            zig = !zig;
            ans.push_back(temp);
        }
        return ans;
    }