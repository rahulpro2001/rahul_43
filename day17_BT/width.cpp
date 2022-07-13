class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<int,TreeNode*>> q;
        q.push({0,root});
        int maxi = 0;
        while(q.size())
        {
            int cur = q.front().first;
            int n =q.size();
            int first;
            int last;
            for(int i =0 ;i< n;i++)
            {
                 TreeNode *node = q.front().second;
                  long long lvl = q.front().first-cur;
                if(i==0)first = lvl;
                if(i==n-1)last = lvl;
                q.pop();
                if(node->left)q.push({2*lvl+1,node->left});
                if(node->right)q.push({2*lvl+2,node->right});
            }
            maxi = max(maxi,last-first+1);
        }
        return maxi;
    }
};
        // 0-n 
        // o-n