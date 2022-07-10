class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<./  3) return 0;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++)
        {
            int sum=nums[i];
            int l = i+1;
            int r =nums.size()-1;
            vector<int> temp(3);
            while(l<r)
            {
                if( nums[l]+nums[r] +sum ==0 )
                {
                    temp[0] = nums[i];
                    temp[1] = nums[l];
                    temp[2] = nums[r];
                    ans.push_back(temp);
                    while(l<r and nums[l]==temp[1]) l++;
                    while(l<r and nums[r]==temp[2]) r--;
                }
                else if(nums[l]+nums[r] +sum>0 ) r--;
                else l++;
            }
            while(i<nums.size()-2 and nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};