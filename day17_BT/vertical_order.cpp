//in this we apply something like vertical_order->level->multiset
//-1->1->{4,5,5}
//multiset stores value can be same values and it stores in a sorted manner

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode *,pair<int,int>>> q;
        q.push({root,{0,0}});
        map<int,map<int,multiset<int>>> mp;
        while(q.size())
        {
            int node = q.front().first->val;
            int vo = q.front().second.first;
            int lvl =q.front().second.second;
            mp[vo][lvl].insert(node);
            if(q.front().first->left) q.push({q.front().first->left,{vo-1,lvl+1}});
            if(q.front().first->right) q.push({q.front().first->right,{vo+1,lvl+1}});
            q.pop();
        }
        
        vector<vector<int>> ans;
       
        for(auto it:mp)
        {
             vector<int> temp;
            for(auto it1 = it.second.begin();it1!=it.second.end();it1++) for(auto it2 = it1->second.begin();it2!=it1->second.end();it2++)temp.push_back(*it2);
            ans.push_back(temp);
        }
        
        return ans;
    }
};