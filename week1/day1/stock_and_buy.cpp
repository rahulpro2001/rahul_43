class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini = p[0];
        int prof=0;
        for(int i=0;i<p.size();i++)
        {
            if(mini>p[i])mini = p[i];
            else prof = max(prof,p[i]-mini);
        }
        return prof;
    }
};
