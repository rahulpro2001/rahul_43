//in this we can use something (NSR - NSL + 1)*HEIHGT TAK MAXIMUM
//INT ONE PASs WE CAN SOLVE IT BY STORING THE (R-L-1)*HEIGHT

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int maxi = 0;
        stack<int> st;
        for(int i=0;i<=h.size();i++)
        {
            while(!st.empty() and (i==h.size()  || h[st.top()]>h[i]))
            {
                int temp = h[st.top()];
                st.pop();
                int w;
                if(st.empty()) w = i;
                else w = i-st.top()-1;
                maxi = max(maxi,w*temp);
            }
            st.push(i);
        }
        return maxi ;
    }
};