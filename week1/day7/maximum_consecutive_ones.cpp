class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi  = 0;int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                maxi = max(maxi,ans);
                ans =0;
                continue;
            }
            ans++;
        }
         maxi = max(maxi,ans);
        return maxi;
    }
};