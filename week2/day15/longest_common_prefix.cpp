 int min(int a,int b){
        if(a>b) return a;
    else return b;}
    string longestCommonPrefix(vector<string>& strs) {
        string ans= "";
        int n = 0;
        for(int i = 0;i<strs.size();i++)n =min(n,strs[i].size());
        for(int j= 0;j<n;j++)
        {
            char c= strs[0][j];
              for(int i=0;i<strs.size();i++)
             {
                if(strs[i][j]!=c)return ans;
                 
             }
             ans+=c;
        }
        return ans;
    }