int maxSumIS(int arr[], int n)  
	{  
	    vector<int> dp(n);
	    dp[0] = arr[0];
	    for(int i= 1;i<n;i++)
	    {
	        int maxi = 0;
	        for(int j = i-1;j>=0;j--)
	        {
	            if(arr[i]>arr[j])maxi=max(maxi,dp[j]);
	        }
	        dp[i] = maxi+arr[i];
	    }
	    int maxi = 0;
	    for(int i=0;i<n;i++)maxi = max(maxi,dp[i]);
	    return maxi;
	}  