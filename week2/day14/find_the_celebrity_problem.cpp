 int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int pot;
        stack<int> st;
        for(int i=0;i<n;i++)st.push(i);
        while(st.size()!=1)
        {
            int a = st.top();st.pop();
            int b= st.top();st.pop();
            if(M[a][b]==1)st.push(b);
            else st.push(a);
        }
        
        if(st.size()==0)return -1;
        
        pot = st.top();
        
        for(int i=0;i<n;i++)
        {
            if(i!=pot and (M[pot][i]==1 || M[i][pot]==0))return -1;
        }
        
        return pot;
    }