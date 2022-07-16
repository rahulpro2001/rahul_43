int Solution::findMedian(vector<vector<int>> &A)

{

    int n=A.size(),m=A[0].size();

    int lo = INT_MAX, hi = INT_MIN;

    for(int i=0;i<n;i++){

        lo = min(lo, A[i][0]);

        hi = max(hi, A[i][m-1]);

    }

    

    int ans;

    while(lo<=hi)

    {

        int mid=lo+(hi-lo)/2;

        int count=0;


        for(int i=0;i<n;i++)

            count += countElementsLessThanMid(A[i], mid);

            

        if(count<=(n*m/2)){

            ans=mid;

            lo=mid+1;

        }

        else

            hi=mid-1;

    }

    return ans;        

}