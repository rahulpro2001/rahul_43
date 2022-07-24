class Solution {
public:
    void func(vector<int> &col,vector<int> &nd,vector<int> &rd,vector<vector<string>> &ans,vector<string> &temp,int row,int n)
    {
        if(row==n){
            ans.push_back(temp);return;
        }
        for(int i=0;i<n;i++)
        {
            if(col[i]==0 and nd[row+i]==0 and rd[row-i+n-1]==0)
            {
                temp[row][i] = 'Q';
                col[i] = 1;
                nd[row+i] = 1;
                rd[row-i+n-1] = 1 ;
                func(col,nd,rd,ans,temp,row+1,n);
                rd[row-i+n-1] =0 ;
                nd[row+i] = 0;
                col[i] = 0;
                temp[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string pp = "";
        vector<string> temp;
        for(int i=0;i<n;i++)pp+=".";
        for(int i =0;i<n;i++)temp.push_back(pp);
        vector<int> col(n),nd(2*n-1),rd(2*n-1);
        func(col,nd,rd,ans,temp,0,n);
        return ans;
    }
};