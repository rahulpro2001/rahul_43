 static bool cmp(Job a,Job b)
    {
        if(a.profit>b.profit) return true;
        return false;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,cmp);
        int sum = 0;int maxi=0,count=0;
        for(int i=0;i<n;i++) maxi=max(maxi,arr[i].dead);
        vector<int> vis(maxi,-1);
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead-1;j>=0;j--)
            {
                if(vis[j]==-1)
                {
                    sum+=arr[i].profit;
                    vis[j] = i;
                    count++;
                    break;
                }
            }   
        }    
      return {count,sum};  
    }