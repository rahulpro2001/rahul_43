class Solution {
public:
    int trap(vector<int>& h) {
        int ans = 0;
        int lm = INT_MIN,rm = INT_MIN,l=0,r=h.size()-1;
        while(l<r)
        {
            if(h[l]<=h[r]) 
            {
                if(lm<h[l]) lm = h[l];
                else ans+=lm-h[l];
                l++;
            }
            else
            {
                if(rm<h[r]) rm = h[r];
                else ans+=rm-h[r];
                r--;
            }
        }
        return ans;
    }
};