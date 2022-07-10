class Solution {
public:
    int fillCups(vector<int>& amount) {
        int cnt =0 ;
        while(amount[0]!=0 || amount[1]!=0 || amount[2]!=0)
        {
            if(amount[0]+amount[1]>=amount[1]+amount[2] and amount[0]>=1)
            {
                if(amount[1]>=1)amount[1]--;
                else if(amount[2]>=1)amount[2]--;
                amount[0]--;
                cnt++;
                continue;
            }
            if(amount[1]>=1)
            {
                if(amount[2]>=1)amount[2]--;
                amount[1]--;
                cnt++;
                continue;
            }
            if(amount[2]>=1)
            {
                amount[2]--;
                cnt++;
                continue;
            }
        }
        return cnt;
    }
};