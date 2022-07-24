class Solution {
public:
    int myAtoi(string s) {
        int negflag=0;
        int temp=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='-')
            {
                negflag=1;break;
                temp = i;
            }
            else if(s[i]==' ') continue;
        }
        string ans = s.substr(temp,s.size()-temp);
        stringstream ss(ans);
        int res =0;
        ss >> res;
        if(negflag==1) return (1*res);
        return res;
    }
};