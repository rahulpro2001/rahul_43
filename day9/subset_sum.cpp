void func(vector<int> &ans,int sum,vector<int> arr,int n,int i)
{
    if(n==i){ans.push_back(sum);return;}
   int s1=0,s2=0;
     s1 +=sum;
     s2 +=sum;
    s1+=arr[i++];
    func(ans,s1,arr,n,i);
    func(ans,s2,arr,n,i);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        int sum = 0;
        func(ans,sum,arr,N,0);
        return ans;
    }