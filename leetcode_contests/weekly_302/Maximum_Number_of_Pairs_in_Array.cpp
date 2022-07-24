class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans(2);
        unordered_map<int,int> mp;
        for(int it:nums)mp[it]++;
        int first=0,second=0;
        for(auto it:mp)
        {
           first+=it.second/2;
           second+=it.second%2;
        }
        ans[0] = first;
        ans[1] = second;
        return ans;
    }
};