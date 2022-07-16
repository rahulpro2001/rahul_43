vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {

    

    int n=A.size();

    vector<int>ans;

    
    sort(A.begin(), A.end());

    sort(B.begin(), B.end());

    priority_queue<pair<int, pair<int, int>>>pq;

    set<pair<int,int>>st;

    

    pq.push({A[n-1]+B[n-1],{n-1,n-1}});

    st.insert({n-1,n-1});

    

    while(C--)

    {

        auto p = pq.top();pq.pop();

        int sum = p.first; 

        int i = p.second.first;

        int j = p.second.second;


        ans.push_back(sum);

        

        sum = A[i-1] + B[j];

        if(st.find({i-1,j})==st.end()){

            pq.push({sum, {i-1,j}});

            st.insert({i-1,j});

        }

        sum = A[i] + B[j-1];

        if(st.find({i,j-1})==st.end()){

            pq.push({sum, {i,j-1}});

            st.insert({i,j-1});

        }

    }

    return ans;

}
