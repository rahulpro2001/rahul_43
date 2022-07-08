class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = nums[0],t = nums[0];
        do
        {
            s = nums[s];
            t = nums[nums[t]];
        }while(s!=t);
        t = nums[0];
        while(s!=t)
        {
            s = nums[s];
            t = nums[t];
        }
        return s;
    }
};