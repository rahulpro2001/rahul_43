class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;int ans=0;
        for(int i=0;i<nums.size();i++) st.insert(nums[i]);
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            int par = nums[i]-1;
            if(!st.count(par)){
                par++;
                while(st.count(par++))sum++;
                ans = max(ans,sum);
            }
        }
        return ans;
    }
};
