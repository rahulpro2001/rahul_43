class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0,j=1;int cnt = 1;
        while(j<nums.size())
        {
            if(nums[i]!=nums[j]) {i=i+1; swap(nums[i],nums[j]); cnt++;}
            j++;
        }
        return cnt;
    }
};