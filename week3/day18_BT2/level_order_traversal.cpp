class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size())
        {
            int n = q.size();
            vector<int> temp;
            for(int i=0;i<n;i++)
            {
                temp.push_back(q.front()->val);
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                q.pop();
            }
            ans.push_back(temp);
        }
      return ans;
    }
};