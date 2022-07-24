class Solution {
public:
    string intToRoman(int num) {
        vector<int> nums = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> roman = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans = "";
        int j = 0;
             while(num and j<nums.size())
             {
                while(num>=nums[j])
                {
                    ans+=roman[j];
                    num-=nums[j];
                }
                 j++;
             }
         return ans;
    }
};