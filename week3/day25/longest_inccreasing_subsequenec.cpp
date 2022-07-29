class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        dp.push_back(nums[0]);
        int ind = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(dp[ind]<nums[i])
            {
                dp.push_back(nums[i]);
                ind++;
            }
            else
            {
                if(lower_bound(dp.begin(),dp.end(),nums[i])!=dp.end())
                {
                    int it = lower_bound(dp.begin(),dp.end(),nums[i])-dp.begin();
                    dp[it] = nums[i];
                }
            }
        }
        return dp.size();
    }
};
// 0 1  2  3
// 2 3  7  18

// 10 9 2 5 3 7 101 18
// 1  1 1 2 2 3  4   4