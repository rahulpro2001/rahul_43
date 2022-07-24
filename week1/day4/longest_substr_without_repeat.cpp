class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;int l=0,r=0;vector<int> mp(256,-1);
       if(s==" " || s.size()==1) return 1;
       while(r<s.size()){
           if(mp[s[r]]!=-1) l = max(mp[s[r]]+1,l);
           mp[s[r]] = r;
           maxi = max(maxi,r-l+1);
           r++;
       }
        return maxi;
    }
};