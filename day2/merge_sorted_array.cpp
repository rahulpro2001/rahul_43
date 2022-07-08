class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m--;n--;
        for(int i = nums1.size()-1;i>=0;i--)
        {
            if(m>=0 and n>=0 and nums1[m]>=nums2[n]) nums1[i] = nums1[m--];
            else if(n>=0 ) nums1[i] = nums2[n--];
        }
    }
};