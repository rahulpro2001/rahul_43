int findMinimumCoins(int amount) 
{
    // Write your code here
	vector<int> coins = {1000,500,100,50,20,10,5,2,1};
	int cnt = 0;int i=0;
	while(amount)
	{
		if(i==coins.size()) break;
		if(amount>=coins[i]) {amount-=coins[i];cnt++;}
		else i++;
	}
	return cnt;
}
