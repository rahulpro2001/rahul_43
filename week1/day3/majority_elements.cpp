class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt =1 ;
        int num = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(cnt==0) 
            {
                num = nums[i];
                cnt = 1;
            }
            else if(num==nums[i]) cnt++;
            else cnt--;
        }
        return num;
    }
};