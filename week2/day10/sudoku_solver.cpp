class Solution {
public:
    bool poss(int row,int col,char c,vector<vector<char>>& b)
    {
        for(int i=0;i<9;i++)
        {
            if(b[i][col]==c)return false;
            if(b[row][i]==c)return false;
            if(b[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
        }
        return true;
    }
    bool func(vector<vector<char>>& b)
    {
        for(int i=0;i<b.size();i++)
        {
            for(int j = 0;j<b[0].size();j++)
            {
                if(b[i][j]=='.')
                {
                    for(char ch = '1';ch<='9';ch++)
                    {
                        if(poss(i,j,ch,b))
                        {
                            b[i][j] = ch;
                            if(func(b)) return true;
                            else b[i][j]= '.';
                        }      
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& b) {
        func(b);
    }
};