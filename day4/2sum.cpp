class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int tar = target - nums[i];
            if(mp.find(tar)!=mp.end())return {i,mp[tar]};
            else mp[nums[i]] = i;    
        }
        return {};
    }
};