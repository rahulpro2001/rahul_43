class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4) return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-3;i++)
        {
            vector<int> temp(4);
            for(int j=i+1;j<nums.size()-2;j++)
            {
                int sum = nums[i]+nums[j];
                int l = j+1;
                int r = nums.size()-1;
                int tar = target - sum;
                while(l<r)
                {
                    int sum2 = nums[l]+nums[r];
                    if(sum2==tar){
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[l];
                        temp[3] = nums[r];
                        ans.push_back(temp);
                         while(l<r and nums[l]==temp[2]) l++;
                    while(l<r and nums[r]==temp[3]) r--;
                    }
                    else if(sum2>tar) r--;
                    else l++;
                   
                }
                while(j<nums.size()-2 and nums[j]==nums[j+1]) j++;
            }
             while(i<nums.size()-3 and nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};