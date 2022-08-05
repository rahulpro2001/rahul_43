class Solution {
public:
     void func(int ind,vector<vector<int>> &ans, vector<int> &temp, vector<int> &can,int tar)
    {
        if(tar==0)
        {ans.push_back(temp);return;}
         
        for(int i=ind;i<can.size();i++)
        {
            if(i!=ind and can[i]==can[i-1]) continue;
            if(tar>=can[i]) 
            {
                temp.push_back(can[i]);
                tar-=can[i];
                func(i+1,ans,temp,can,tar);
                tar+=can[i];
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        sort(can.begin(),can.end());
        vector<int> temp;
        vector<vector<int>> ans;
        func(0,ans,temp,can,target);
        return ans;
    }
};
// tc 2^n * k