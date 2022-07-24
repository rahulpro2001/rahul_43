bool static cmp(Item a,Item b)
    {
        if((double)(a.value*b.weight)>(double)(b.value*a.weight)) return true;
        return false;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        double sum=0.0;
         int Wt=0;
        for(int i=0;i<n;i++)
        {
            if((Wt+arr[i].weight)<=W)
            {
                sum+=arr[i].value;
                Wt+=arr[i].weight;
            }
            else
            {
              sum = sum + ((arr[i].value/(double)arr[i].weight)*(double)(W-Wt));
              break;
            }
        }
        return sum; 
    }