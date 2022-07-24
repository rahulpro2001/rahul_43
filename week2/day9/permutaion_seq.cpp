class Solution {
public:
    string getPermutation(int n, int k) {
        string ans = "";
        int fact = 1;
        vector<int> nums;
        for(int i=1;i<n;i++)
        {fact*=i;nums.push_back(i);}//factorial n-1 and store nums
        k--;
        nums.push_back(n);
        while(1){
            ans+=to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);
            if(nums.size()==0) break;
            k%=fact;
            fact/=nums.size();
        }
        return ans;
    }
};