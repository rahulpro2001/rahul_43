class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        // int maxi = 0;
        for(int i = 0;i<nums.size();i++)
        {
            int temp = nums[i];
            int tempy = 0;
            while(temp)
            {
                tempy+=temp%10;
                temp/=10;
            }
            mp[tempy].push_back(nums[i]);
        }
         int maxi = 0;
        for(auto it:mp)
        {
            if(it.second.size()>1)
            {
               
                vector<int> temp;
                for(int it:it.second)temp.push_back(it);
                sort(temp.begin(),temp.end());
                reverse(temp.begin(),temp.end());
                maxi = max(maxi,temp[0]+temp[1]);
            }
        }
        return maxi!=0?maxi:-1;
    }
};