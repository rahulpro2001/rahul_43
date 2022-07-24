class Solution {
public:
    void func(int ind,vector<vector<int>> &ans, vector<int> &temp, vector<int> &can,int tar)
    {
        if(tar==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<can.size();i++)
        {
            if(tar>=can[i]) 
            {
                temp.push_back(can[i]);
                tar-=can[i];
                func(i,ans,temp,can,tar);
                tar+=can[i];
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> ans;
        vector<int> temp;
      func(0,ans,temp,c,t);
        return ans;
    }
};