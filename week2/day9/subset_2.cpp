class Solution {
public:
    void func(int ind, vector<int> &temp,vector<vector<int>> &ans,vector<int>& nums){
        ans.push_back(temp);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind and nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            func(i+1,temp,ans,nums);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      vector<vector<int>> ans;
        vector<int> temp;
        func(0,temp,ans,nums);
        return ans;
    }
};

// tc 2^n * n    recursion * copying the data structure into the sc- 2^n * k
